/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 10:23:31 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/18 12:05:57 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	 newstring[10][10];
	int		i;
	int		j;
	int		ctr;
	int		*res;

	res = malloc(sizeof(*str) * ft_strlen(str) + 1);

	i = 0;
	j = 0;
	ctr = 0;
	while (i < res)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			newstring[ctr][j]='\0';
			ctr++;
			j=0;
		}
		else
		{
			newstring[ctr][j] = str[i];
			j++;
		}
		return (newstring);
	}

}

int main()
{
	ft_split_whitespaces("This is test string");

	return (0);
}
