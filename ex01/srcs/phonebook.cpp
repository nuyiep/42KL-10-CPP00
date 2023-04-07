/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:55 by plau              #+#    #+#             */
/*   Updated: 2023/04/07 15:08:14 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/******************************************************************************/
/*						CONSTRUCTORS & DESTRUCTORS							  */
/******************************************************************************/

/* Constructor - Initialize */
Phonebook::Phonebook(void)
{
	_contact_index = 0;
}

/* Deconstructor- free memory allocation */
Phonebook::~Phonebook(void)
{
}

/******************************************************************************/
/*							HELPER FUNCTIONS								  */
/******************************************************************************/
/* Save user input into data */
/* If clt-d is entered, exit the program */
static void	get_data(std::string &data)
{
	if (std::getline(std::cin, data).eof())
	{
		std::cout << std::endl;
		std::exit(0);
	}
}

/* Print the contact */
static void	displayTable(Contact contacts[MAX_CONTACTS])
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

/******************************************************************************/
/*							PUBLIC FUNCTIONS								  */
/******************************************************************************/

/* Get user input and store them into the Contact Class */
void	Phonebook::addContact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	while (1)
	{
		std::cout << "Enter first name: ";
		get_data(firstname);
		if (isalpha(firstname[0]) == false)
			continue ;
		if (firstname.empty() == false)
			break ;
	}
	
	while (1)
	{
		std::cout << "Enter last name: ";
		get_data(lastname);
		if (isalpha(lastname[0]) == false)
			continue ;
		if (lastname.empty() == false)
			break ;
	}
	
	while (1)
	{
		std::cout << "Enter nickname: ";
		get_data(nickname);
		if (isalpha(nickname[0]) == false)
			continue ;
		if (nickname.empty() == false)
			break ;
	}
	
	while (1)
	{
		std::cout << "Enter phone number: ";
		get_data(phone_number);
		if (isdigit(phone_number[0]) == false)
			continue ;
		if (phone_number.empty() == false)
			break ;
	}

	while (1)
	{
		std::cout << "Enter darkest secret: ";
		get_data(darkest_secret);
		if (darkest_secret.empty() == false)
			break ;
	}
	_contacts[_contact_index].saveContact(firstname, 
		lastname, nickname, phone_number, darkest_secret);
	_contact_index = (_contact_index + 1) % MAX_CONTACTS;
}

/* Search for a contact */
void	Phonebook::searchContact(void)
{
	std::string index;

	if (_contact_index == 0)
	{
		std::cout << "No contacts in record. Please ADD a contact first" << std::endl;
		return ;
	}
	displayTable(_contacts);
	while (1)
	{
		std::cout << "Enter search index (0-7): ";
		get_data(index);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		{
			if (_contacts[index[0] - '0'].getFirstName().empty() == true)
			{
				std::cout << "Invalid index" << std::endl;
				continue ;
			}
			else
			{
				_contacts[index[0] - '0'].printDetails();
				break ;
			}
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}
