/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblokha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:50:19 by vblokha           #+#    #+#             */
/*   Updated: 2018/01/24 17:50:21 by vblokha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//ft_itoa_base.c 
#include <stdlib.h>

static int		ft_s_size(unsigned long long int n, int base)
{
	int i;

	i = 0;
	while (n / base > 0 && (i = i + 1))
		n = n / base;
	return (i + 1);
}

static char	*ft_fill_itoa(int i, unsigned long long int n, int base)
{
	char date[17] = "0123456789abcdefg";
	char *s;

	s = (char *)malloc(sizeof(char) * i + 1);
	s[i--] = '\0';
	while (n / base > 0)
	{
		s[i] = date[n % base];
	
		n = n / base;
		i--;
	}
	s[i] = date [n % base];
	return (s);
}

char	*ft_itoa_base(unsigned long long int n, int base)
{
	char *s;
	int i;

if (base <= 0 && base >= 17)
	return NULL;
	i = 0;
	s = NULL;
	i = ft_s_size(n, base);
	s = ft_fill_itoa(i, n, base);
	return (s);
}
