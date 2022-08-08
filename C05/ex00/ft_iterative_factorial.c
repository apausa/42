/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:06:44 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/13 20:35:09 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int a;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	a = 1;
	while (nb > 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
