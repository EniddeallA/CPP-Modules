# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 04:16:14 by akhalid           #+#    #+#              #
#    Updated: 2022/03/14 07:12:14 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			BraiiiiiiinnnzzzZ
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