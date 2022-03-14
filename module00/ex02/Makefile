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