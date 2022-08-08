/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:55:59 by papausa-          #+#    #+#             */
/*   Updated: 2020/11/28 15:55:59 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	x;
	char	reverse_alphabet[26];

	i = 25;
	x = 122;
	while (i >= 0)
	{
		reverse_alphabet[i] = x;
		write(1, &reverse_alphabet[i], 1);
		i--;
		x--;
	}
}
