# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 12:26:30 by plau              #+#    #+#              #
#    Updated: 2023/04/07 19:28:23 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tests
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -fsanitize=address -std=c++98 -pedantic
SRCS_FILES	=	tests \
				Account
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