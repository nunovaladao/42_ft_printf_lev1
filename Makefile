# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 11:06:05 by nsoares-          #+#    #+#              #
#    Updated: 2022/12/12 19:55:57 by nsoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC_FILES = print_char.c print_hex.c print_int.c print_ptr.c \
			print_str.c print_unsigned.c ft_printf.c

OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		ar rc $(NAME) $(OBJS)
			
clean:
	$(MAKE) clean -C ./libft 
	$(RM) $(OBJS) libftprintf.a 
	
fclean: clean
		$(MAKE) fclean -C ./libft
		$(RM) $(NAME)
		
re:	fclean	$(NAME)
