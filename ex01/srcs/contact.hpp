/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:57 by plau              #+#    #+#             */
/*   Updated: 2023/04/07 14:59:04 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream> //std::cout, std::endl
#include <string>
#include <iomanip> //std::setw
#include <cctype> //isalpha

class Contact
{
	public:
		Contact();
		~Contact();
		void		saveContact(std::string firstname, std::string lastname, 
						   	   std::string nickname, std::string phone_number, 
						   	   std::string darkest_secret);
		void		printDetails();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;		
};

#endif
