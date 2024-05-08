# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 10:55:39 by rmarquar          #+#    #+#              #
#    Updated: 2024/03/21 14:47:54 by muhnal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook
CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -pedantic
SRC			:= Contact.cpp main.cpp PhoneBook.cpp
OBJ			:= $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re