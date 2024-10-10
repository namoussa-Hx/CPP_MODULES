NAME = account

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

# CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)
   
$(NAME): $(OBJ)
	$(CC)  $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC)  -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
