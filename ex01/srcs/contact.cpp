/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:38:00 by plau              #+#    #+#             */
/*   Updated: 2023/02/24 18:50:37 by plau             ###   ########.fr       */
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
							std::string nickname, std::string phone_number, 
							std::string darkest_secret)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
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
	if (this->_firstname.empty() == 1 || this->_lastname.empty() == 1
		|| this->_nickname.empty() == 1 || this->_phone_number.empty() == 1
		|| this->_darkest_secret.empty() == 1)
		return (1);
	else
		return (0);
}
