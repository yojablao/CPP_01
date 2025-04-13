NAME = replace
INCLUDE = header.hpp 
SRC = main.cpp   tool.cpp
OBJ =$(SRC:.cpp=.o)
CC =c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o:%.cpp INCLUDE

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all