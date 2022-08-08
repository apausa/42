/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:16:37 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/09 16:17:04 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	if (to_find[a] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while ((str[a + b] == to_find[b]) && (str[a + b] != '\0'))
		{
			if (to_find[b + 1] == '\0')
			{
				return (&str[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
