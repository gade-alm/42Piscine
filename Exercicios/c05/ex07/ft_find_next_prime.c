/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:18:30 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/29 18:09:50 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
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

int	ft_find_next_prime(int nb)
{
	int	a;

	a = nb;
	if (nb <= 2)
		return (2);
	while ((a / 2) < nb)
	{
		if (ft_is_prime(a))
			return (a);
		a++;
	}
	return (0);
}
/*int main()
{
	printf("%d \n", ft_find_next_prime(4));
}*/
