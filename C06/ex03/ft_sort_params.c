/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:35:57 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/15 19:06:45 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_whatever(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_strcmp(char *x, char *y)
{
	int		z;

	z = 0;
	while ((x[z] != '\0') && (y[z] != '\0') && (x[z] == y[z]))
	{
		z++;
	}
	return (x[z] - y[z]);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*aux;

	a = 1;
	while (a < argc)
	{
		b = 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) < 0)
			{
				aux = argv[a];
				argv[a] = argv[b];
				argv[b] = aux;
			}
			b++;
		}
		a++;
	}
	ft_whatever(argv);
}
