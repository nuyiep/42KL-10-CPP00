
CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -g -fsanitize=address -std=c++98 -pedantic
NAME		=	megaphone
SRC			=	megaphone.cpp
all: $(NAME)
$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(SRC)
fclean:
	$(RM) $(NAME)
re: fclean all
.PHONY: fclean