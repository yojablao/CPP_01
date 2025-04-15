NAME = harlFilter
INCLUDE = Harl.hpp
SRC = Harl.cpp   main.cpp
OBJ =$(SRC:.cpp=.o)
CC =c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

%.o:%.cpp $(INCLUDE)
	$(CC) $(CFLAGS)  -c -o $@ $<

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all