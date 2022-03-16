# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 01:43:54 by akhalid           #+#    #+#              #
#    Updated: 2022/03/14 01:43:55 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			account
CPP 	= 			c++
FLAGS 	= 			-std=c++98 -Wall -Wextra -Werror -g
SRCS	=			tests.cpp	\
					Account.cpp

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
					@rm -rf *.dSYM
					@./account > file.log

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME) file.log

re		:			fclean all