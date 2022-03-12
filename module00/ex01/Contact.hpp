/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/12 10:13:30 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "iostream"
# include "string"

class	Contact{
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname,
				int number, std::string secret);
		~Contact();
		void setfirstname(std::string firstname);
		void setlastname(std::string last_name);
		void setnickname(std::string nickname);
		void setnumber(int number);
		void setsecret(std::string secret);
		std::string getfirstname(void);
		std::string getlastname(void);
		std::string getnickname(void);
		int getnumber(void);
		std::string getsecret(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int number;
		std::string secret;
};

#endif