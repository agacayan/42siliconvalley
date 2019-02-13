/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 10:43:11 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/15 18:24:04 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int nbr;

	nbr = 0;
	while ((s1[nbr] != '\0' || s2[nbr] != '\0') && nbr < n)
	{
		if (s1[nbr] != s2[nbr])
			return (s1[nbr] - s2[nbr]);
		nbr++;
	}
	return (0);
}
