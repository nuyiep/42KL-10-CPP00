# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 12:26:30 by plau              #+#    #+#              #
#    Updated: 2023/02/24 13:53:08 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -fsanitize=address -std=c++98 -pedantic
SRCS_FILES	=	phonebook \
				contact \
			 	main
SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRCS_FILES)))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))
SRCS_DIR	=	srcs/
OBJS_DIR	= 	objs/

all:
				mkdir -p $(OBJS_DIR)
				make $(NAME)
				
$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re