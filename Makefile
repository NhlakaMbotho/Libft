# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 17:06:50 by nmbotho           #+#    #+#              #
#    Updated: 2017/06/26 09:49:12 by nmbotho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	memory/ft_memset.c\
		memory/ft_memcpy.c\
		memory/ft_memccpy.c\
		memory/ft_memmove.c\
		memory/ft_memchr.c\
		memory/ft_memcmp.c\
		memory/ft_memalloc.c\
		memory/ft_memdel.c\
		strings/ft_bzero.c\
		strings/ft_strlen.c\
		strings/ft_strdup.c\
		strings/ft_strcpy.c\
		strings/ft_strncpy.c\
		strings/ft_strcat.c\
		strings/ft_strncat.c\
		strings/ft_strlcat.c\
		strings/ft_strchr.c\
		strings/ft_strrchr.c\
		strings/ft_strstr.c\
		strings/ft_strnstr.c\
		strings/ft_strcmp.c\
		strings/ft_strncmp.c\
		strings/ft_strnew.c\
		strings/ft_strdel.c\
		strings/ft_strclr.c\
		strings/ft_striter.c\
		strings/ft_striteri.c\
		strings/ft_strmap.c\
		strings/ft_strmapi.c\
		strings/ft_strequ.c\
		strings/ft_strnequ.c\
		strings/ft_strsub.c\
		strings/ft_strjoin.c\
		strings/ft_strtrim.c\
		strings/ft_strsplit.c\
		strings/ft_strcrop.c\
		strings/ft_get_last_char.c\
		numbers/ft_atoi.c\
		numbers/ft_itoa.c\
		numbers/ft_int_max_min.c\
		characters/ft_isalpha.c\
		characters/ft_isdigit.c\
		characters/ft_isalnum.c\
		characters/ft_isascii.c\
		characters/ft_isprint.c\
		characters/ft_toupper.c\
		characters/ft_tolower.c\
		characters/ft_test_alpha.c\
		linkedlists/ft_lst_count.c\
		linkedlists/ft_lstadd_first.c\
		linkedlists/ft_lstnew.c\
		linkedlists/ft_lstdelone.c\
		linkedlists/ft_lstadd_last.c\
		linkedlists/ft_lst_contains.c\
		linkedlists/ft_lst_print.c\
		linkedlists/ft_lst_del.c\
		linkedlists/ft_lst_clear.c\
		output/ft_putnbr.c\
		output/ft_putchar_fd.c\
		output/ft_putendl.c\
		output/ft_putstr_fd.c\
		output/ft_putnbr_fd.c\
		output/ft_putendl_fd.c\
		output/ft_putchar.c\
		output/ft_putstr.c\
		ft_addstring.c\
		ft_linkedlist_to_array.c\
		ft_list_count.c\
		get_next_line/ft_get_next_line.c
		
OBJ = 	ft_memset.o\
		ft_memcpy.o\
		ft_memccpy.o\
		ft_memmove.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_memalloc.o\
		ft_memdel.o\
		ft_bzero.o\
		ft_strlen.o\
		ft_strdup.o\
		ft_strcpy.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o\
		ft_strlcat.o\
		ft_strchr.o\
		ft_strrchr.o\
		ft_strstr.o\
		ft_strnstr.o\
		ft_strcmp.o\
		ft_strncmp.o\
		ft_strnew.o\
		ft_strdel.o\
		ft_strclr.o\
		ft_striter.o\
		ft_striteri.o\
		ft_strmap.o\
		ft_strmapi.o\
		ft_strequ.o\
		ft_strnequ.o\
		ft_strsub.o\
		ft_strjoin.o\
		ft_strtrim.o\
		ft_strsplit.o\
		ft_strcrop.o\
		ft_get_last_char.o\
		ft_atoi.o\
		ft_itoa.o\
		ft_int_max_min.o\
		ft_isalpha.o\
		ft_isdigit.o\
		ft_isalnum.o\
		ft_isascii.o\
		ft_isprint.o\
		ft_toupper.o\
		ft_tolower.o\
		ft_test_alpha.o\
		ft_lst_count.o\
		ft_lstadd_first.o\
		ft_lstnew.o\
		ft_lstdelone.o\
		ft_lstadd_last.o\
		ft_lst_contains.o\
		ft_lst_print.o\
		ft_lst_del.o\
		ft_putnbr.o\
		ft_putchar_fd.o\
		ft_putendl.o\
		ft_putstr_fd.o\
		ft_putnbr_fd.o\
		ft_putendl_fd.o\
		ft_putchar.o\
		ft_putstr.o\
		ft_addstring.o\
		ft_linkedlist_to_array.o\
		ft_list_count.o\
		ft_get_next_line.o\
		ft_lst_clear.o\

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

