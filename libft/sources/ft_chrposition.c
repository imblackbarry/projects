/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblokha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:15:06 by vblokha           #+#    #+#             */
/*   Updated: 2018/07/14 17:15:08 by vblokha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_chrposition(char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}