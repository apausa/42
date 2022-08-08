/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:33:36 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/03 08:50:30 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == 57 && b == 56 && c == 57 && d == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_loop(char a, char b, char c, char d)
{
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				while (d <= 57)
				{
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	ft_loop(a, b, c, d);
}
