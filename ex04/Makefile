#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

#================================FILES=========================================#

NAME = sed42
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

#================================ARGUMENTS========================================#

FILENAME = ./qa/input.txt
S1 = brain
S2 = mind

ARGS = $(FILENAME) $(S1) $(S2)
OUTPUT = $(FILENAME).replace
EXPECTED = $(FILENAME).expected

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

leak: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

run: all
	./$(NAME) $(ARGS)
	@sed 's/$(S1)/$(S2)/g' $(FILENAME) > $(EXPECTED)
	@diff $(OUTPUT) $(EXPECTED) > /dev/null && \
	echo "\033[32mOK\033[0m" || \
	echo "\033[31mKO\033[0m"

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(OUTPUT)
	rm -f $(EXPECTED)

re: fclean all

.PHONY: all clean fclean re leak
