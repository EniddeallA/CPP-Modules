# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 14:29:23 by akhalid           #+#    #+#              #
#    Updated: 2022/03/28 16:56:41 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=			Interface
CPP 	= 			c++
FLAGS 	= 			-std=c++11 -Wall -Wextra -Werror -g
SRCS	=			main.cpp \
					AMateria.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp \
					MateriaSource.cpp
				
					

all		: 			$(NAME)

$(NAME)	:			$(SRCS)
					@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
					@rm -rf *.dSYM

clean	:			
					@rm -rf *.o

fclean	:			clean
					@rm -rf $(NAME)

re		:			fclean all	