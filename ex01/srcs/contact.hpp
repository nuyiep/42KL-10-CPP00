/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:57 by plau              #+#    #+#             */
/*   Updated: 2023/04/05 19:00:35 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void		setContact(std::string firstname, std::string lastname, 
						   	   std::string nickname, std::string phone_number, 
						   	   std::string darkest_secret);
		void		printContact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		int			check_empty();
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;		
};

#endif
