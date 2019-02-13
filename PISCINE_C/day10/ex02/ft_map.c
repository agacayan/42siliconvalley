/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:04:12 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/22 15:39:41 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *res;
	int i;

	res = malloc(sizeof(*res) * (length));
	i = 0;
	if (res == NULL)
		return (0);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
