# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csummers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 14:37:39 by csummers          #+#    #+#              #
#    Updated: 2016/11/21 14:37:40 by csummers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c pf_imtoa_base.c pf_wfunctions.c pf_printer.c pf_conv_s_num.c pf_conv_u_num.c pf_conv_c_and_s.c pf_width_and_prec.c pf_handle_conv_specs.c pf_get_flag_info.c

LIBFT = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstdel.c ft_lstmap.c ft_putstrarr.c ft_strarrnew.c ft_strarrdel.c ft_strarrlen.c ft_realloc_c.c ft_realloc_s.c ft_pow.c get_next_line.c

FILE_SRCS = $(addprefix srcs/,$(FILES))

LIBFT_SRCS = $(addprefix srcs/libft/,$(LIBFT))

SRCS = $(FILE_SRCS) $(LIBFT_SRCS)

OBJ = $(FILES:.c=.o) $(LIBFT:.c=.o)

HDR = -I./includes

LIB = -L./. -lftprintf

TEST_LIB = -L./test -lft

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re lib more basic main int long str n p w prec width prec_and_width

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(HDR) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test/a.out *~ */*~

re: fclean all

lib:
	gcc $(CFLAGS) $(HDR) -c $(LIBFT_SRCS)
	ar rc test/libft.a $(LIBFT:.c=.o)
	@rm -f $(OBJ)

more:
	emacs srcs/ft_printf.c

main:
	emacs test/main.c

basic: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out basic
	@rm -f $(OBJ)

int: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out int
	@rm -f $(OBJ)

long: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out long
	@rm -f $(OBJ)

str: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out str
	@rm -f $(OBJ)

n: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out n
	@rm -f $(OBJ)

p: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out p
	@rm -f $(OBJ)

w: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out w test/file
	@rm -f $(OBJ)

prec: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out prec
	@rm -f $(OBJ)

width: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out width
	@rm -f $(OBJ)

prec_and_width: fclean
	gcc $(CFLAGS) $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out prec_and_width
	@rm -f $(OBJ)

go: fclean
	gcc $(HDR) $(TEST_LIB) $(FILE_SRCS) test/main.c -o test/a.out
	./test/a.out go
	@rm -f $(OBJ)
