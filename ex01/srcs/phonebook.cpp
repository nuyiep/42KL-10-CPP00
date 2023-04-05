/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:55 by plau              #+#    #+#             */
/*   Updated: 2023/04/05 21:55:16 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* Constructor - Initialize */
Phonebook::Phonebook(void)
{
	_contact_index = 0;
}

/* Deconstructor- free memory allocation */
Phonebook::~Phonebook(void)
{
}

/* Save user input into data */
/* If user input is empty, exit the program */
static void	get_data(std::string &data)
{
	if (std::getline(std::cin, data).eof())
	{
		std::cout << std::endl;
		std::exit(0);
	}
}

/* Get user input and store them into the Contact Class */
void	Phonebook::addContact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	get_data(firstname);
	std::cout << "Enter last name: ";
	get_data(lastname);
	std::cout << "Enter nickname: ";
	get_data(nickname);
	std::cout << "Enter phone number: ";
	get_data(phone_number);
	std::cout << "Enter darkest secret: ";
	get_data(darkest_secret);
	_contacts[_contact_index].setContact(firstname, 
		lastname, nickname, phone_number, darkest_secret);
	_contact_index = (_contact_index + 1) % MAX_CONTACTS;
}

/* Print the contact */
static void	printContact(Contact contacts[MAX_CONTACTS])
{
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		if (contacts[i].getFirstName().length() > 10)
			std::cout << contacts[i].getFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::right << contacts[i].getFirstName() << "|";
		if (contacts[i].getLastName().length() > 10)
			std::cout << contacts[i].getLastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::right << contacts[i].getLastName() << "|";
		if (contacts[i].getNickName().length() > 10)
			std::cout << contacts[i].getNickName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::right << contacts[i].getNickName() << "|" << std::endl;
	}
}

/* Search for a contact */
void	Phonebook::searchContact(void)
{
	std::string index;

	if (_contact_index == 0)
	{
		std::cout << "No contacts to display" << std::endl;
		return ;
	}
	printContact(_contacts);
	while (1)
	{
		std::cout << "Enter search index: ";
		get_data(index);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		{
			if (_contacts[index[0] - '0'].check_empty() == 1)
			{
				std::cout << "Invalid index" << std::endl;
				continue ;
			}
			else
			{
				_contacts[index[0] - '0'].printContact();
				break ;
			}
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}
