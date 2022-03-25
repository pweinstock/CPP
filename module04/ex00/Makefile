NAME	=	polymorphism

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS 	=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean:	clean
		rm -f $(NAME)

re: 	fclean all