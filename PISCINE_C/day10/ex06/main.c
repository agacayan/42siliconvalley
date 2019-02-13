/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:52:16 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/22 11:25:18 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		ft_putstr("Stop : division by zero");
	}
	else if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero");
	}
	else if (argc == 4)
	{
		operation(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	return (0);
}
