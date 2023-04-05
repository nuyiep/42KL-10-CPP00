/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:49:03 by plau              #+#    #+#             */
/*   Updated: 2023/04/05 20:38:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* Start of the main function */
/* eof - to handle clt-d */
int main(void)
{
	std::string	command;
	Phonebook	phonebook;

	std::cout << std::endl;
	std::cout << "	Welcome to my Phonebook" << std::endl;
	std::cout << "	You could only type in 3 commands" << std::endl;
	std::cout << "	ADD, SEARCH or EXIT (Case-sensitive)" << std::endl;
	std::cout << "	Otherwise, you will be prompted to re-enter the command" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter a command (ADD/SEARCH/EXIT): ";
		if (std::getline(std::cin, command).eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
