/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agacayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:00:36 by agacayan          #+#    #+#             */
/*   Updated: 2019/01/24 17:23:32 by agacayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 30

int	write_now(int fd)
{
	int		ret;
	int		ret2;
	int		ret3;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, sizeof(buf))) > 0)
	{
		ret2 = 0;
		while (ret2 < ret)
		{
			ret3 = write(STDOUT_FILENO, buf + ret2, ret - ret2);
			if (ret3 < 1)
				return (1);
			ret2 = ret2 + ret3;
		}
	}
	return (0);
}

int	open_now(char *str)
{
	int		fd;
	int		ret;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(2, "No such file or directory\n", 24);
		return (1);
	}
	ret = write_now(fd);
	if (close(fd) == -1)
	{
		return (1);
	}
	return (ret);
}

int	main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			open_now(av[i]);
			i++;
		}
	}
	else
	{
		if (write_now(STDIN_FILENO) != 0)
			return (1);
	}
	return (0);
}
