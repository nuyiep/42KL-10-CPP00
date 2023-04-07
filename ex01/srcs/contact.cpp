/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:38:00 by plau              #+#    #+#             */
/*   Updated: 2023/04/07 14:40:43 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/******************************************************************************/
/*						CONSTRUCTORS & DESTRUCTORS							  */
/******************************************************************************/

/* Constructor */
/* Gets called when an object of the class is created */
/* Purpose: Initialize the object's data members to some default values */
/* In this case- empty- means that the constructor does not initialize any data */
Contact::Contact(void)
{
}

/* Destructor */
/* Gets called when an object of the class is destroyed */
/* Purpose: Clean up any resources that were allocated by the object during its lifetime */
Contact::~Contact(void)
{
}

/******************************************************************************/
/*								SETTERS										  */
/******************************************************************************/

/* Set contact details */
void	Contact::saveContact(std::string firstname, std::string lastname, 
							std::string nickname, std::string phoneNumber, 
							std::string darkestSecret)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

/******************************************************************************/
/*								GETTERS										  */
/******************************************************************************/
/* Get first name - returns the firstname private variable */
std::string	Contact::getFirstName(void)
{
	return (this->_firstname);
}

/* Get last name - returns the lastname private variable */
std::string	Contact::getLastName(void)
{
	return (this->_lastname);
}

/* Get nick name - returns the nickname private variable */
std::string	Contact::getNickName(void)
{
	return (this->_nickname);
}

/******************************************************************************/
/*							PUBLIC FUNCTIONS								  */
/******************************************************************************/

/* Print out the Class variables */
void	Contact::printDetails(void)
{
	std::cout << "First name: 		" << this->_firstname << std::endl;
	std::cout << "Last name: 		" << this->_lastname << std::endl;
	std::cout << "Nickname: 		" << this->_nickname << std::endl;
	std::cout << "Phone number: 		" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: 	" << this->_darkestSecret << std::endl;
}
