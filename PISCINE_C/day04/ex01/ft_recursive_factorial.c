/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 09:45:29 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/12 15:19:48 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb >= 12)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
