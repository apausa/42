/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:36:47 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/03 09:18:48 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c + d + u != 168)
	{
		write(1, ", ", 2);
	}
}

void	loop(int c, int d, int u)
{
	while (c <= 55 && d <= 57 && u <= 58)
	{
		if (u == 58)
		{
			d++;
			u = d + 1;
		}
		if (d == 57)
		{
			c++;
			d = c;
		}
		else
		{
			ft_putchar(c, d, u);
			u++;
		}
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	d = 49;
	u = 50;
	loop(c, d, u);
}
