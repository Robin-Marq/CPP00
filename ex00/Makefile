# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 10:12:20 by rmarquar          #+#    #+#              #
#    Updated: 2024/03/21 12:23:47 by rmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 		:=		megaphone
CXX 		:=		c++
CXXFLAGS 	:= 		-Wall -Wextra -Werror -std=c++98
SRC 		:= 		megaphone.cpp
OBJS 		:=		$(SRC:.cpp=.o)

$(Name): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(Name)

all: $(Name)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(Name)

re:	fclean all

.PHONY: all clean fclean re
