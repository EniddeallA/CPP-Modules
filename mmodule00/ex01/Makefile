# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 01:44:01 by akhalid           #+#    #+#              #
#    Updated: 2022/03/14 01:44:02 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			phonebook
CPP 	= 			c++
FLAGS 	= 			-std=c++98 -Wall -Wextra -Werror -g
SRCS	=			PhoneBook.cpp	\
					Contact.cpp		\
					main.cpp

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME)

re		:			fclean all