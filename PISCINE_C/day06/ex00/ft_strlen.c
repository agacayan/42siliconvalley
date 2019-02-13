/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:44:52 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/11 16:30:37 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*(str + i))
	{
		count++;
		i++;
	}
	return (count);
}
