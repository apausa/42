/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:49:53 by acrucesp          #+#    #+#             */
/*   Updated: 2020/11/29 22:37:49 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char o);

int		only_natural(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

void	rush(int x, int y)
{
	char pnt[2];

	x = only_natural(x);
	y = only_natural(y);
	pnt[0] = 0;
	pnt[1] = 0;
	while (pnt[1] < y)
	{
		while (pnt[0] < x)
		{
			if (pnt[1] == 0 && (pnt[0] == (x - 1) || pnt[0] == 0))
				ft_putchar('A');
			else if (pnt[1] == (y - 1) && (pnt[0] == (x - 1) || pnt[0] == 0))
				ft_putchar('C');
			else if (pnt[0] == 0 || pnt[1] == 0 || pnt[0] == (x - 1) ||
					pnt[1] == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(32);
			pnt[0]++;
		}
		pnt[0] = 0;
		pnt[1]++;
		ft_putchar(10);
	}
}
