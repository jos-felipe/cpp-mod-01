# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:34:41 by josfelip          #+#    #+#              #
#    Updated: 2024/09/10 13:09:09 by josfelip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME = megaphone

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
INCLUDE_DIR = .
INCLUDE =
INCLUDE_PATH = ${addprefix $(INCLUDE_DIR)/, $(INCLUDE)}

# Source files
SRC_DIR = .
SRC = megaphone.cpp
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
	valgrind -q --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind.log ./${NAME} ${ARGS}
	sh qa/mem_check.sh

faultcheck: all
	valgrind -s --track-origins=yes ./${NAME} ${ARGS}

run: all
	./${NAME} "shhhhh... I think the students are asleep..."
	./${NAME} Damnit " ! " "Sorry students, I thought this thing was off."
	./${NAME}

.PHONY: all clean fclean re debug print memcheck faultcheck run
