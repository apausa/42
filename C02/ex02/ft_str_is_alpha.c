/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papausa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:48:46 by papausa-          #+#    #+#             */
/*   Updated: 2020/12/07 15:15:15 by papausa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] > 64 && str[a] < 91) || (str[a] > 96 && str[a] < 123))
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
