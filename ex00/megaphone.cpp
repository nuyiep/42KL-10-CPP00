/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:43:54 by plau              #+#    #+#             */
/*   Updated: 2023/04/08 16:26:54 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //std::endl
#include <string>
#include <algorithm>

void	capitalize(std::string &str)
{
	unsigned int i;

	i = 0;
	for (unsigned int i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
	return ;
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
		std::string str = av[i];
		capitalize(str);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}

/* Or */
// int main(int ac, char **av)
// {
// 	int i;

// 	i = 1;
// 	if (ac == 1)
// 	{
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE*" << std::endl;
// 		return (0);
// 	}
// 	while (i < ac)
// 	{
// 		std::string s(av[i]);
// 		transform(s.begin(), s.end(), s.begin(), ::toupper);
// 		std::cout << s;
// 		i++;
// 	}
// 	std::cout << std::endl;
// 	return (0);
// }

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
