# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:03:23 by akhalid           #+#    #+#              #
#    Updated: 2022/03/18 14:43:28 by akhalid          ###   ########.fr        #
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