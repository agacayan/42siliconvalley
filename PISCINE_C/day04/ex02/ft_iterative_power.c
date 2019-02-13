/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:22:15 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/12 15:42:14 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	else if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
		while (power > 0)
		{
			res = nb * res;
			power--;
		}
	return (res);
}
