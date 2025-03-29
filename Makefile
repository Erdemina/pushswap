NAME = push_swap

LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ_DIR = obj/

SRCS = ./commands/push.c \
       ./commands/ft_atoi2.c \
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



all: $(LIBFT) $(PRINTF) $(NAME)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C ./libft

$(PRINTF):
	@$(MAKE) -C ./printf

clean:
	$(RM) $(OBJ_DIR)
	$(MAKE) -C ./libft clean
	$(MAKE) -C ./printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./libft fclean
	$(MAKE) -C ./printf fclean

re: fclean all

.PHONY: all clean fclean re
