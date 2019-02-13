/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:48:24 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/23 15:36:17 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list != NULL)
	{
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
		}
		return (begin_list);
	}
	return (begin_list);
}
