/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 07:57:27 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/13 15:15:00 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fct;
	int fc;

	fc = 1;
	fct = 1;
	if ((nb < 0 || nb > 12))
	{
		return (0);
	}
	else if (nb == 1);
	{
		return (1);
	}
	else
	{
		while (fc <= nb)
		{
			fct = fct * fc;
			fc++;
		}
		return (fct);
	}
}
