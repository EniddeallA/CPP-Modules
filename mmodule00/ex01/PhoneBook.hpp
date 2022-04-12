/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniddealla <eniddealla@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:54 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/13 08:01:11 by eniddealla       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <string>
# include <sstream>

class	PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void execute(void);

	private:
		int index;
		int size;
		Contact contacts[8];
		void ADD(void);
		void SEARCH(void);
		void EXIT(void);
		void display_contacts(void);
		void printfield(std::string value);
		int	 check_index(std::string input);
		void display_contact(int i);
};

#endif