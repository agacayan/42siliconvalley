/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:39:41 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/23 16:21:05 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*tmp;
	t_list	*begin_list;

	i = 0;
	j = 0;
	begin_list = NULL;
	while (i < ac)
	{
		if (begin_list != NULL)
		{
			tmp = ft_create_elem(av[j]);
			tmp->next = begin_list;
			begin_list = tmp;
			j++;
		}
		else
		{
			begin_list = ft_create_elem(av[j]);
			j++;
		}
		i++;
	}
	return (begin_list);
}
