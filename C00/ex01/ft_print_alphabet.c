/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_aphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:55:30 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/03 08:34:30 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abecedario;

	abecedario = 'a';
	while (abecedario <= 'z')
	{
		write(1, &abecedario, 1);
		abecedario++;
	}
}
