#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
MAKE_NO_PRINT = $(MAKE) --no-print-directory 

#================================FILES=========================================#

NAME = my_own_sed
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

leak: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

run: all
	./$(NAME) qa/input.txt brain mind
	@sh qa/is_right.sh

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f qa/input.txt.replace

re: fclean all

.PHONY: all clean fclean re leak
