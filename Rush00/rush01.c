/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:29:04 by acrucesp          #+#    #+#             */
/*   Updated: 2020/11/29 21:19:32 by acrucesp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		only_natural(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

void	fnc_draw(char pntx, char pnty, int x, int y)
{
	if ((pntx == 0 && pnty == 0)
			|| (pntx == (x - 1) && pnty == (y - 1)
				&& pnty != 0 && pntx != 0))
		ft_putchar(47);
	else if ((pntx == (x - 1) && pnty == 0)
			|| (pnty == (y - 1) && pntx == 0))
		ft_putchar(92);
	else if (pntx == 0 || pnty == 0
			|| pntx == (x - 1) || pnty == (y - 1))
		ft_putchar(42);
	else
		ft_putchar(32);
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
			fnc_draw(pnt[0], pnt[1], x, y);
			pnt[0]++;
		}
		pnt[0] = 0;
		pnt[1]++;
		ft_putchar(10);
	}
}
