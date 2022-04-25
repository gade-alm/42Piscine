/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:22:18 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/28 10:37:54 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (a <= (nb / a))
	{
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}