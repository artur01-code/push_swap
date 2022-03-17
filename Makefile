# -*- Makefile -*-

SRCS = main.c ft_split.c check.c ft_atoi.c handle_input.c libft.c \
		operations.c libft_lst.c merge_sort.c swap_push.c rotate.c \
		rotate_reverse.c

OBJS = $(SRCS:.c=.o)

BONUS_S	=

BONUS_O	= $(BONUS_S:.c=.o)

CC = gcc
RM = rm -f
CFLAGS ?= -Wall -Werror -Wextra

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flcean re bonus rebonus
