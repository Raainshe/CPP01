# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 15:18:30 by rmakoni           #+#    #+#              #
#    Updated: 2025/04/22 16:36:30 by rmakoni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC = 	main.cpp \
		Harl.cpp 
		

OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX)	$(CXXFLAGS)	$(OBJ)	-o	$(NAME)

%.o: %.cpp
	$(CXX)	$(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re