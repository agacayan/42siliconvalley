/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:36:38 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/22 17:48:17 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

int		get_oper(char *operator)
{
	int i;
	int j;

	i = 0;
	while (g_opptab[i].op)
	{
		j = 0;
		while (operator[j] && g_opptab[i].op[j] &&
				g_opptab[i].op[j] == operator[j])
		{
			j++;
			if (!operator[j])
				return (i);
		}
		i++;
	}
	return (-1);
}

void	calc(char *s1, char *s2, int oper)
{
	int		res;
	int		n1;
	int		n2;
	void	(*nbr)(int);
	int		(*fatoi)(char*);

	nbr = &ft_putnbr;
	fatoi = &ft_atoi;
	n1 = fatoi(s1);
	n2 = fatoi(s2);
	res = g_opptab[oper].func(n1, n2);
	nbr(res);
}

int		main(int argc, char **argv)
{
	int ops;

	if (argc != 4)
		return (0);
	ops = get_oper(argv[2]);
	if (ops == -1)
	{
		g_opptab[5].func(0, 0);
		return (0);
	}
	else if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		ft_putstr("Stop : division by zero\n");
	}
	else if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
	}
	else if (argc == 4)
	{
		calc(argv[1], argv[3], ops);
		ft_putchar('\n');
	}
	return (0);
}
