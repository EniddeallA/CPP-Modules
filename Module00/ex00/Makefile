# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 01:43:50 by akhalid           #+#    #+#              #
#    Updated: 2022/03/14 01:43:51 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			megaphone
CPP 	= 			c++
FLAGS 	= 			-std=c++98 -Wall -Wextra -Werror
SRCS	=			megaphone.cpp

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME)

re		:			fclean all