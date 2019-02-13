# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agacayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/18 10:15:12 by agacayan          #+#    #+#              #
#    Updated: 2019/01/18 13:59:36 by agacayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

cat $1 | grep -i "^nicolas" | grep -i "bauer" | cut -d'	' -f4 | grep -E "([0-9])[0-9]-[0-9]" 