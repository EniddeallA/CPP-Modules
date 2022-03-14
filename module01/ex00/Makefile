# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 04:16:14 by akhalid           #+#    #+#              #
#    Updated: 2022/03/14 04:16:52 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			account
CPP 	= 			c++
FLAGS 	= 			-std=c++98 -Wall -Wextra -Werror -g
SRCS	=			main.cpp	\
					Zombie.cpp	\
					newZombie.cpp	\
					randomChump.cpp	

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
					@rm -rf *.dSYM

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME)

re		:			fclean all