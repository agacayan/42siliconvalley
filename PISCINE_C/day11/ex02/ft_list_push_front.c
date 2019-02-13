/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 11:21:53 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/23 11:54:14 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*begin_list != NULL)
	{
		tmp = *begin_list;
		tmp2 = ft_create_elem(data);
		tmp2->next = tmp;
		*begin_list = tmp2;
	}
	else
		*begin_list = ft_create_elem(data);
}
