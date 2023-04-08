/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:49:03 by plau              #+#    #+#             */
/*   Updated: 2023/04/08 15:40:36 by plau             ###   ########.fr       */
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
		getline(std::cin, userInput);
		if (std::cin.eof())
			break ;
		if (userInput.compare("ADD") == 0)
			phonebook.addContact();
		else if (userInput.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (userInput.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid option" << std::endl;
	}
	return (0);
}
