/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:54 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/12 10:01:50 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();

		void ADD(void);
		void SEARCH(void);
		void EXIT(void);

	private:
		int size;
		Contact *contacts;
};

#endif