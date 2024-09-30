# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:34:41 by josfelip          #+#    #+#              #
#    Updated: 2024/09/20 15:14:06 by josfelip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME = crappy_phonebook

# Target executable
NAME = ${PROGRAM_NAME}
ARGS =

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Build a separate executable for debugging purposes
DFLAGS = -g3
ifdef WITH_DEBUG
  NAME = ${PROGRAM_NAME}_debug
  CFLAGS = ${DFLAGS}
endif

# Header files
INCLUDE_DIR = ./include
INCLUDE = Contact.hpp PhoneBook.hpp
INCLUDE_PATH = ${addprefix $(INCLUDE_DIR)/, $(INCLUDE)}

# Source files
SRC_DIR = ./src
SRC = Contact.cpp main.cpp PhoneBook.cpp
SRC_PATH = ${addprefix $(SRC_DIR)/, $(SRC)}

# Object files
OBJ_DIR = ./obj
ifdef WITH_DEBUG
  OBJ_DIR = ./obj_debug
endif
OBJ_PATH = ${addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o)}

RM = rm -rf

all: ${OBJ_DIR} ${NAME}

${OBJ_DIR}:
	mkdir -p ${OBJ_DIR}

# Compile source files into object files
${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp ${INCLUDE_PATH}
	${CC} ${CFLAGS} -I${INCLUDE_DIR} -c $< -o $@

# Link the executable
${NAME}: ${OBJ_PATH}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ_PATH}

# Clean object files
clean:
	${RM} ${OBJ_DIR}
	${RM} ${OBJ_DIR}_debug

# Clean object files and executable
fclean: clean
	${RM} ${NAME}
	${RM} ${NAME}_debug
	${RM} mem_check.sh

# Rebuild everything
re: fclean all

debug:
	@make WITH_DEBUG=TRUE --no-print-directory

# Check variable values
print:
	@echo "INCLUDE_PATH: ${INCLUDE_PATH}"
	@echo "SRC_PATH: ${SRC_PATH}"
	@echo "OBJ_PATH: ${OBJ_PATH}"

memcheck: all
	valgrind -q --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind.log ./${NAME} < inputs.txt
	@wget -nc https://raw.githubusercontent.com/jos-felipe/sdk/refs/heads/main/qa/mem_check.sh > /dev/null 2>&1
	@sh mem_check.sh

faultcheck: all
	valgrind -s --track-origins=yes ./${NAME} < inputs.txt

run: all
	./${NAME} < inputs.txt

.PHONY: all clean fclean re debug print memcheck faultcheck run
