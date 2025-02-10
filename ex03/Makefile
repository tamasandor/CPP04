# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@stundent.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 19:35:18 by atamas            #+#    #+#              #
#    Updated: 2025/02/10 19:42:56 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 
OBJ = $(SRC.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re