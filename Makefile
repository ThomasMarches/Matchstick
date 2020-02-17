##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

NAME	= matchstick

RM		= rm -f

SRCS	=	src/check_number_of_stick.c \
			src/create_map.c \
			src/error.c \
			src/fill_map.c \
			src/ia_play.c \
			src/main.c \
			src/my_getnbr.c \
			src/my_strlen.c \
			src/print_map.c \
			src/my_printf.c \
			src/my_putchar.c \
			src/my_put_nbr.c \
			src/my_put_nbr_base.c \
			src/my_putstr.c \
			src/my_charcmp.c \
			src/print_decimal.c \
			src/print_adress.c \
			src/print_octal.c \
			src/print_binary.c \
			src/next_char_check.c \
			src/my_put_nbr_unsigned_int.c \
			src/my_put_nbr_unsigned_long_int.c \
			src/my_put_nbr_long_int.c \
			src/formatting_decimal.c \
			src/print_hexadecimal.c \
			src/print_char.c \
			src/print_string.c \
			src/print_unprintable_char.c \
			src/my_strupcase.c \
			src/formatting_hexadecimal.c \
			src/my_charupcase.c \
			src/win_or_lose.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -I./Include

CFLAGS	+= -W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	gcc $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all