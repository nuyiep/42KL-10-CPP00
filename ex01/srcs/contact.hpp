/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:57 by plau              #+#    #+#             */
/*   Updated: 2023/02/24 18:51:43 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void		setContact(std::string firstname, std::string lastname, 
						   	   std::string nickname, std::string phone_number, 
						   	   std::string darkest_secret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		int			check_empty();
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;		
};

#endif
