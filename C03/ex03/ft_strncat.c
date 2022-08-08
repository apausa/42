/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:32:18 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/09 15:32:33 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	char			*b;

	a = 0;
	b = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && a < nb)
	{
		*dest = *src;
		dest++;
		src++;
		a++;
	}
	*dest = '\0';
	return (b);
}
