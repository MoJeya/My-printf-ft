# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 15:29:03 by mjeyavat          #+#    #+#              #
#    Updated: 2021/08/19 11:58:23 by mjeyavat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC 		= gcc

CFLAGS	= -Wall -Wextra -Werror -c


FILES =	ft_printf.c \
		setTyp.c \
		ft_print_d.c \
		ft_print_s.c \
		ft_print_c.c \
		ft_print_p.c \
		ft_print_x.c \
		ft_print_bigX.c \
		ft_print_u.c \

OBJ := $(FILES:.c=.o)

LINKED_OBJ = ./libft/*.o

all: linked_objects $(NAME)

$(NAME): objects
	ar rc $(NAME) $(OBJ) $(LINKED_OBJ)

objects:
	$(CC) $(CFLAGS) $(FILES)

linked_objects:
	make -C ./libft

clean:
	rm -f $(OBJ) $(LINKED_OBJ)

fclean: clean
	rm -f $(NAME) ./libft/libft.a

re: fclean all
