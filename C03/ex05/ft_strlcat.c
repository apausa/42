/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 09:34:11 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/10 09:35:23 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	c = 0;
	while (src[c])
	{
		c++;
	}
	a = 0;
	while ((dest[a]) && (a < size))
	{
		a++;
	}
	b = 0;
	d = a;
	while ((src[b]) && (a + 1 < size))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	*dest = '\0';
	return (c + d);
}
