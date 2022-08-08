/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 21:27:58 by acrucesp          #+#    #+#             */
/*   Updated: 2020/11/29 21:53:21 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		only_naturals(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

void	fnc_draw(char pntx, char pnty, int x, int y)
{
	if ((pnty == 0 && pntx == 0) || (pntx == 0 && pnty == (y - 1)))
		ft_putchar('A');
	else if ((pnty == (y - 1) && pntx == (x - 1))
			|| (pnty == 0 && pntx == (x - 1)))
		ft_putchar('C');
	else if (pntx == 0 || pnty == 0 || pntx == (x - 1) || pnty == (y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	char pnt[2];

	pnt[0] = 0;
	pnt[0] = 0;
	x = only_naturals(x);
	y = only_naturals(y);
	while (pnt[1] < y)
	{
		while (pnt[0] < x)
		{
			fnc_draw(pnt[0], pnt[1], x, y);
			pnt[0]++;
		}
		pnt[0] = 0;
		pnt[1]++;
		ft_putchar(10);
	}
}
