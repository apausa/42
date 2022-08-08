# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 22:28:26 by bboriko-          #+#    #+#              #
#    Updated: 2020/12/13 22:28:28 by bboriko-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = main.c ft_slicer.c ft_gerror.c ft_dict.c ft_cooldict.c
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(CLEAN) $(NAME)
fclean:
		$(CLEAN) *.o *.gch .DS_Store
norma:
		norminette
re::	
		fclean all

