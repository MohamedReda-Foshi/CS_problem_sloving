
NAME = main
CC = gcc
FLAG = -Wall -Wextra -Werror
SRC = main.c 
OBJ= $(SRC:%.c=%.o)
RM =rm -f

build: $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	
%.c: %.c
	$(CC) $(FLAG) $^ -c | -o $@
