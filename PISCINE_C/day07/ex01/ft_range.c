/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:00:37 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/17 16:01:34 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *res;
	int diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		return ((void*)0);
	}
	else
	{
		res = (int *)malloc(sizeof(int) * (diff));
		while (i < diff)
		{
			res[i] = min;
			i++;
			min++;
		}
		return (res);
	}
}
