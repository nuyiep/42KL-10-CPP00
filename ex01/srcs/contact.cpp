/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:38:00 by plau              #+#    #+#             */
/*   Updated: 2023/04/05 21:53:37 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/* Constructor */
Contact::Contact(void)
{
}

/* Destructor */
Contact::~Contact(void)
{	
}

/* Set contact details */
void	Contact::setContact(std::string firstname, std::string lastname, 
							std::string nickname, std::string phoneNumber, 
							std::string darkestSecret)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

/* Print out the Class variables */
void	Contact::printContact(void)
{
	std::cout << "First name: 		" << this->_firstname << std::endl;
	std::cout << "Last name: 		" << this->_lastname << std::endl;
	std::cout << "Nickname: 		" << this->_nickname << std::endl;
	std::cout << "Phone number: 		" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: 	" << this->_darkestSecret << std::endl;
}

/* Get first name */
std::string	Contact::getFirstName(void)
{
	return (this->_firstname);
}

/* Get last name */
std::string	Contact::getLastName(void)
{
	return (this->_lastname);
}

/* Get nick name */
std::string	Contact::getNickName(void)
{
	return (this->_nickname);
}

/* Returns 1 if the class is empty, else returns 0 */
int	Contact::check_empty(void)
{
	if (this->_firstname.empty())
		return (1);
	else
		return (0);
}
