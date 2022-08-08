/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcujavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:26:21 by dcujavan          #+#    #+#             */
/*   Updated: 2020/12/06 22:26:24 by dcujavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**ft_create_arr(char *arrmain);
void	ft_print_arr(int **arr);
int		ft_validate_values(int argc, char *argv);

int		main(int argc, char **argv)
{
	int **arr;
	int result_validation;

	result_validation = ft_validate_values(argc, argv[1]);
	if (result_validation < 0)
		return (-1);
	arr = ft_create_arr(argv[1]);
	ft_print_arr(arr);
	return (0);
}

int		ft_validate_values(int argc, char *argv)
{
	int long_argv_1;
	int i;

	if (argc != 2)
	{
		write(1, "The received parameters must be two\n", 36);
		return (-1);
	}
	long_argv_1 = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		long_argv_1++;
		i++;
	}
	if (long_argv_1 < 31)
	{
		write(1, "Wrong number of rows and colummns\n", 34);
		return (-1);
	}
	return (0);
}
