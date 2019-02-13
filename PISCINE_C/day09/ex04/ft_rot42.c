/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:11:34 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/25 12:54:00 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ROT 13 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_rot42(char *str)
{
	int i;
	int a;

	i = 0;
	while (*str != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if((a = str[i] + ROT) <= 'Z')
				ft_putchar(a);
			else
				a = str[i] - ROT;
				ft_putchar(a);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if((a = str[i] + ROT) <= 'z')
				ft_putchar(a);
			else
				a = str[i] - ROT;
				ft_putchar(a);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
