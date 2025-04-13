# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 12:44:57 by yojablao          #+#    #+#              #
#    Updated: 2025/04/13 15:21:41 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde_Zombies

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEAD = Zombie.hpp

SRC = main.cpp  Zombie.cpp zombieHorde.cpp

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