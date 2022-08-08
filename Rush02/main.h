/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 22:31:10 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/13 22:31:12 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int		ft_gerror(char **argv, int argc);
char	**ft_slicer(char *argv);
char	*ft_dict(char *file);
char	**ft_cooldict(char *dict);

#endif
