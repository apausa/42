/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 08:16:21 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/08 08:52:10 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	if (str[a] > 96 && str[a] < 123)
	{
		str[a] = str[a] - 32;
	}
	while (str[a] != '\0')
	{
		if (!((str[a - 1] > 47 && str[a - 1] < 58) ||
		(str[a - 1] > 64 && str[a - 1] < 91) ||
		(str[a - 1] > 96 && str[a - 1] < 123)))
		{
			if (str[a] > 96 && str[a] < 123)
				str[a] = str[a] - 32;
			a++;
		}
		else
		{
			if (str[a] > 64 && str[a] < 91)
				str[a] = str[a] + 32;
			a++;
		}
	}
	return (str);
}
