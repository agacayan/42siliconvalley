/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:46:33 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/23 14:45:57 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	t_list		*temp;
	int			i;

	i = 0;
	temp = begin_list;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
