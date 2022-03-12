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