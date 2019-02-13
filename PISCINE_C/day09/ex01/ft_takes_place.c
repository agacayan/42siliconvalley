/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 09:27:11 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/18 10:13:27 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int i;

	i = hour;
	if (hour > 12)
		i = hour % 12;
	if (hour == 0)
		i = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. and %d.00 A.M.\n", i, (i + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. and 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. and 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M. and 1.00 A.M.\n");
	else
		printf("%d.00 P.M. and %d.00 P.M.\n", i, (i + 1) % 12);
}
