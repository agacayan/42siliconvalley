/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:42:11 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/22 17:05:03 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	operation(char *nb1, char *opr, char *nb2)
{
	int		res;
	int		n1;
	int		n2;
	void	(*nbr)(int);
	int		(*fatoi)(char*);

	nbr = &ft_putnbr;
	fatoi = &ft_atoi;
	res = 0;
	n1 = fatoi(nb1);
	n2 = fatoi(nb2);
	if (*opr == '+')
		res = n1 + n2;
	else if (*opr == '-')
		res = n1 - n2;
	else if (*opr == '*')
		res = n1 * n2;
	else if (*opr == '/')
		res = n1 / n2;
	else if (*opr == '%')
		res = n1 % n2;
	nbr(res);
}
