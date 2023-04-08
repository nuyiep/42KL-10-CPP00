
CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic
NAME		=	megaphone
SRC			=	megaphone.cpp

all: 			$(NAME)

test:			all
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

$(NAME): 		$(SRC)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(SRC)

clean:
				rm -rf $(OBJS_DIR)

fclean:			clean
				rm -rf $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re