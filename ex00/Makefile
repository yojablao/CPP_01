# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 14:00:05 by yojablao          #+#    #+#              #
#    Updated: 2025/02/11 14:20:10 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

HEAD = Zombie.hpp

SRC = main.cpp  Zombie.cpp  newZombie.cpp  randomChump.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f


	
all	:	$(NAME)

%.o	:	%.cpp $(HEAD)
	$(CC) $(CFLAGS)  -c -o $@ $<

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
			$(RM) $(OBJ) 

fclean:	clean
			$(RM) $(NAME)

re:	fclean all