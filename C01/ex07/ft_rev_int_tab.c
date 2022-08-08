/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:32:49 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/03 18:39:40 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		a[size];
	int		score;

	score = 0;
	while (score < size)
	{
		a[score] = tab[size - 1 - score];
		score++;
	}
	score = 0;
	while (score < size)
	{
		tab[score] = a[score];
		score++;
	}
}
