/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:23:26 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/07 17:34:46 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 96 && str[a] < 123)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}