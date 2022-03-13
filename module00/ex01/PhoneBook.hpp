/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:54 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/13 01:18:41 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);

	private:
		int size;
		Contact contacts[8];
		void ADD(void);
		void SEARCH(void);
		void EXIT(void);
};

#endif