# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 11:48:20 by iarkhipo          #+#    #+#              #
#    Updated: 2022/11/14 14:26:04 by iarkhipo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
AFLAGS			= ar -rcs
NAME			= libftprintf.a

SRCS = ft_printf.c ft_printf_unsigned.c ft_printf_hex.c ft_printf_service.c ft_printf_ptr.c

ICLS =	Libft/ft_strlen.c \
		Libft/ft_itoa.c \
		Libft/ft_putchar_fd.c \
		Libft/ft_putstr_fd.c
		
OBJS	= $(SRCS:.c=.o)

ICLS_OBJS = 	$(ICLS:.c=.o)

all:				$(NAME)

$(NAME):			$(OBJS) $(ICLS_OBJS)
					$(AFLAGS) $(NAME) $(OBJS) $(ICLS_OBJS)

clean:
					$(RM) $(OBJS) $(ICLS_OBJS)

fclean:				clean
					$(RM) $(NAME)

exec:				
	@$(CC) $(CFLAGS) $(SRCS) $(ICLS)
	@./a.out

re:					fclean $(NAME)

.PHONY:				all clean fclean re
