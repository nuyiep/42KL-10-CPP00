/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:49:03 by plau              #+#    #+#             */
/*   Updated: 2023/04/06 14:05:49 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* Start of the main function */
/* eof - to handle clt-d */
int main(void)
{
	std::string	userInput;
	Phonebook	phonebook;

	while (1)
	{
		std::cout << "Enter a command (ADD/SEARCH/EXIT): ";
		if (std::getline(std::cin, userInput).eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (userInput == "ADD")
			phonebook.addContact();
		else if (userInput == "SEARCH")
			phonebook.searchContact();
		else if (userInput == "EXIT")
			break ;
	}
	return (0);
}
