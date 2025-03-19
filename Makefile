NAME = push_swap

LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC_DIR = srcs/
OBJ_DIR = obj/

SRCS = ./commands/push.c \
       ./commands/rev_rotate.c \
       ./commands/rotate.c \
       ./commands/sort_stacks.c \
       ./commands/sort_three.c \
       ./commands/swap.c \
       ./functions/handle_errors.c \
       ./functions/init_a_to_b.c \
       ./functions/init_b_to_a.c \
       ./functions/stack_init.c \
       ./functions/stack_utils.c \
	   ./push_swap.c

OBJS = $(SRCS:%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
