/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 13:44:07 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/16 16:12:01 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		while (*s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		return (0);
	}
	else
		return (*s1 - *s2);
}

void	ft_sorta(int argc, char *argv[])
{
	int		i;
	int		sorta;
	char	*temp;

	i = 0;
	while (i < argc)
	{
		sorta = 1;
		while (sorta < ((argc - i) - 1))
		{
			if (ft_strcmp(argv[sorta], argv[sorta + 1]) > 0)
			{
				temp = argv[sorta];
				argv[sorta] = argv[sorta + 1];
				argv[sorta + i] = temp;
			}
			sorta++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	if (argc > 1)
	{
		ft_sorta(argc,argv);
		while (a < argc)
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a++;
		}
	}
	return (0);
}
