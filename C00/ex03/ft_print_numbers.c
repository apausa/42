/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:10:35 by papausa-          #+#    #+#             */
/*   Updated: 2020/11/28 16:10:35 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	x;
	char	numbers[10];

	i = 0;
	x = 48;
	while (i < 10)
	{
		numbers[i] = x;
		write(1, &numbers[i], 1);
		i++;
		x++;
	}
}
