/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:47:13 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/03 18:57:35 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	one;
	int	two;
	int aux;

	one = 0;
	while (one < size)
	{
		two = one + 1;
		while (two < size)
		{
			if (tab[one] > tab[two])
			{
				aux = tab[two];
				tab[two] = tab[one];
				tab[one] = aux;
				two = one;
			}
			two++;
		}
		one++;
	}
}
