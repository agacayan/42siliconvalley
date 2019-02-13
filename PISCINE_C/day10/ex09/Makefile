# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agacayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 14:11:16 by agacayan          #+#    #+#              #
#    Updated: 2019/01/22 16:38:12 by agacayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

IDIR = ./includes/
SRCDIR = ./srcs/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCDIR) -I$(IDIR) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
