/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/13 01:18:33 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "iostream"

class	Contact{
	public:
		Contact(void);
		Contact(
				std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string number,
				std::string secret
				);
		~Contact(void);

		std::string getfirstname(void);
		std::string getlastname(void);
		std::string getnickname(void);
		std::string getnumber(void);
		std::string getsecret(void);
		
		void setfirstname(std::string firstname);
		void setlastname(std::string last_name);
		void setnickname(std::string nickname);
		void setnumber(std::string number);
		void setsecret(std::string secret);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string secret;
};

#endif