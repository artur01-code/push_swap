# -*- Makefile -*-

SRCS =	main.c \
		src/ft_split.c \
		src/check.c \
		src/ft_atoi.c \
		src/handle_input.c \
		src/libft.c \
		src/operations.c \
		src/libft_lst.c \
		src/swap_push.c \
		src/rotate.c \
		src/rotate_reverse.c \
		merge_sort.c

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
