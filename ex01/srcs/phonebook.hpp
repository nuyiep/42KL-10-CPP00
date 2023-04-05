/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:37:39 by plau              #+#    #+#             */
/*   Updated: 2023/04/05 16:54:11 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include "contact.hpp"

# define	MAX_CONTACTS 8

class	Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	addContact();
		void	searchContact();
	private:
		Contact 	_contacts[MAX_CONTACTS];
		int			_contact_index;
};

#endif
