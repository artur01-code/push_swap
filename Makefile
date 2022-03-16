# -*- Makefile -*-

SRCS = main.c ft_split.c check.c ft_atoi.c handle_input.c libft.c operations.c

OBJS = $(SRCS:.c=.o)

BONUS_S	=

BONUS_O	= $(BONUS_S:.c=.o)

CC = gcc
RM = rm -f
CFLAGS ?= -Wall -Werror -Wextra
LIB1	= ar -rcs
LIB2	= ranlib

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus:	fclean bonus

.PHONY: all clean flcean re bonus rebonus
