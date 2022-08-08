/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 08:52:46 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/08 09:06:46 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	if (size != 0)
	{
		while ((src[a] != '\0') && (a < size - 1))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (b);
}
