# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agacayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/18 14:03:30 by agacayan          #+#    #+#              #
#    Updated: 2019/01/18 14:07:37 by agacayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

touch -A -000001 -a bomb.txt

stat -s bomb.txt | cut -c112- | rev | cut -c104- | rev