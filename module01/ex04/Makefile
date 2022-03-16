# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eniddealla <eniddealla@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 11:08:37 by akhalid           #+#    #+#              #
#    Updated: 2022/03/16 13:55:32 by eniddealla       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			sed
CPP 	= 			c++
FLAGS 	= 			-std=c++98 -Wall -Wextra -Werror -g
SRCS	=			main.cpp 

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
					@rm -rf *.dSYM

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME)

re		:			fclean all