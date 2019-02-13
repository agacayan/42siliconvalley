/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:31:44 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/15 10:02:14 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int find;
	int word;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		find = 0;
		if (str[i] == to_find[find])
		{
			word = i;
			while (str[i] == to_find[find])
			{
				if (to_find[find + 1] == '\0')
					return (&str[word]);
				find++;
				i++;
			}
			i = word;
		}
		i++;
	}
	return (0);
}
