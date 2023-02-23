/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:43:54 by plau              #+#    #+#             */
/*   Updated: 2023/02/23 19:03:17 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	std::cout << "" << str[i];
	return (str);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE*" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		av[i] = capitalize(av[i]);
		
		std::cout << "" << av[i];
		i++;
	}
	std::cout << "\n";
	return (0);
}

/**
	std::cout << "Hello, World!" << std::endl;
 * #include <iostream>
 * 
 * using namespace std;
 * 
 * int main(void)
 * {
 * 		count << "Enter a value: ";
 * 		int value;
 * 		cin >> value;
 * 		return (0);
 * }
 * 
 */
