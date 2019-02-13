# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agacayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 09:48:07 by agacayan          #+#    #+#              #
#    Updated: 2019/01/22 10:03:12 by agacayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SOURCES = ./*c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
