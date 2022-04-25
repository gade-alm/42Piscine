/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:01:12 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/26 11:42:57 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char*src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (size > 0)
	{
		while (src[a] && a < (size - 1))
		{
		dest[a] = src[a];
		a++;
		}
	dest[a] = '\0';
	}
	return (b);
}
