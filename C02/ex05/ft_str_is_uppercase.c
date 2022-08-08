/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isuppercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:09:45 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/07 17:13:54 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 64 && str[a] < 91)
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}