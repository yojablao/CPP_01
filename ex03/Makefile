# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 17:35:04 by yojablao          #+#    #+#              #
#    Updated: 2025/02/13 18:08:17 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = unnecessary_violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEAD = HumanA.hpp  HumanB.hpp  Weapon.hpp

SRC = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp

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