# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 18:16:15 by mtaib             #+#    #+#              #
#    Updated: 2023/09/03 16:23:01 by mtaib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = AAnimal.cpp Brain.cpp   Cat.cpp     Dog.cpp     main.cpp
OSRC = $(SRC:.cpp=.o)

NAME = Brain
CFLAGS = -Wextra -Werror -Wall -std=c++98

%.o:%.cpp ClapTrap.hpp
	c++ -c $(CFLAGS) $<

all: $(NAME)

$(NAME) :$(OSRC)
		c++ $(CFLAGS) $^ -o $(NAME)

clean :
	@rm -f *.o
fclean :
	@rm -f *.o $(NAME) 
re : fclean all

.PHONY : all clean fclean re
