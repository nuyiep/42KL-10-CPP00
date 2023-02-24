/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:39 by plau              #+#    #+#             */
/*   Updated: 2023/02/24 19:00:44 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include "contact.hpp"

class	Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	addContact();
	private:
		Contact 	_contacts[8];
		int			_contact_index;
};

#endif
