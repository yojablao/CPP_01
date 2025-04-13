# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 15:28:49 by yojablao          #+#    #+#              #
#    Updated: 2025/04/13 15:21:50 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

RM = rm -f


	
all	:	$(NAME)

%.o	:	%.cpp
	$(CC) $(CFLAGS)  -c -o $@ $<

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
			$(RM) $(OBJ) 

fclean:	clean
			$(RM) $(NAME)

re:	fclean all