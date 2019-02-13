/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:40:07 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/17 17:40:27 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	char	*dst;
	int		i;

	i = 0;
	if (src == '\0')
		return (0);
	while (*(src + i))
	{
		i++;
	}
	res = malloc(sizeof(*src) * (i) + 1);
	dst = res;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (res);
}
