NAME	=	fragtrap

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS 	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean:	clean
		rm -f $(NAME)

re: 	fclean all