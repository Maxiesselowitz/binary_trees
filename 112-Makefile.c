CC = gcc
SRC = 112-main.c ../112-array_to_bst.c ../111-bst_insert.c ../3-binary_tree_delete.c  ../0-binary_tree_node.c ../binary_tree_print.c
OBJ = $(SRC:%.c=%.o)
NAME = 112-exec
CFLAGS = -Wall -Werror -Wextra -pedantic
RM = rm -f
%.o: %.c ../binary_trees.h
	$(CC) $(CFLAGS) -c -o $@ $<
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
clean:
	$(RM) *~ $(NAME)
oclean:
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all
