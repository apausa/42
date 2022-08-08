/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcujavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:38:54 by dcujavan          #+#    #+#             */
/*   Updated: 2020/12/06 22:18:05 by dcujavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_assign_cols_values(int **arr, char *arrmain, int i, int j);
void	ft_assign_rows_values(int **arr, char *arrmain, int i, int j);

int		**ft_create_arr(char *arrmain)
{
	int i;
	int j;
	int **arr;

	arr = (int **)malloc(6 * sizeof(int *));
	i = -1;
	j = -1;
	while (++i < 6)
	{
		arr[i] = (int *)malloc(6 * sizeof(int));
		while (++j < 6)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 5) || (i == 5 && j == 0)
			|| (i == 5 && j == 5))
				arr[i][j] = 9;
			else
				arr[i][j] = 0;
		}
		j = -1;
	}
	ft_assign_cols_values(arr, arrmain, i, j);
	ft_assign_rows_values(arr, arrmain, i, j);
	return (arr);
}

void	ft_assign_cols_values(int **arr, char *arrmain, int i, int j)
{
	int z;
	int x;

	i = -1;
	j = -1;
	z = 0;
	x = 8;
	while (++i < 6)
	{
		while (++j < 6)
		{
			if (i == 0 && (j > 0 && j < 5))
			{
				arr[i][j] = arrmain[z] - 48;
				z = z + 2;
			}
			else if (i == 5 && (j > 0 && j < 5))
			{
				arr[i][j] = arrmain[x] - 48;
				x = x + 2;
			}
		}
		j = -1;
	}
}

void	ft_assign_rows_values(int **arr, char *arrmain, int i, int j)
{
	int z;
	int x;

	i = -1;
	j = -1;
	z = 16;
	x = 24;
	while (++i < 6)
	{
		while (++j < 6)
		{
			if (j == 0 && (i > 0 && i < 5))
			{
				arr[i][j] = arrmain[z] - 48;
				z = z + 2;
			}
			else if (j == 5 && (i > 0 && i < 5))
			{
				arr[i][j] = arrmain[x] - 48;
				x = x + 2;
			}
		}
		j = -1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_arr(int **arr)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 6)
	{
		while (++j < 6)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 5) || (i == 5 == 0)
			|| (i == 5 && j == 5))
				ft_putchar(arr[i][j] % 10 + 48);
			else
				ft_putchar(arr[i][j] % 10 + 48);
			ft_putchar(' ');
		}
		ft_putchar('\n');
		j = -1;
	}
}
