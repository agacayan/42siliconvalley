/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:08:21 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/17 17:23:43 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *res;
	int diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		res = (int*)malloc(sizeof(int) * diff);
		if (res == NULL)
			return (0);
		while (i < diff)
		{
			res[i] = min;
			i++;
			min++;
		}
		*range = res;
		return (i);
	}
}
