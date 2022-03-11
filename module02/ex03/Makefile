NAME	=	bsp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS 	=	main.cpp \
			Fixed.cpp \
			Point.cpp \
			bsp.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean:	clean
		rm -f $(NAME)

re: 	fclean all