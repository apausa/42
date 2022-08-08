/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:02:18 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/14 20:02:25 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nbb)
{
	int a;

	a = 2;
	if (nbb < 1)
		return (0);
	while (a <= (nbb / a))
	{
		if (nbb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int		ft_find_next_prime(int nba)
{
	int b;

	b = ft_is_prime(nba);
	if (b == 1)
		return (nba);
	else
		return (ft_find_next_prime(nba + 1));
}
