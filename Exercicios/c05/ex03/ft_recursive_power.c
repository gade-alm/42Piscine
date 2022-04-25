/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:14:25 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/29 17:58:56 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (a * ft_recursive_power (nb, (power - 1)));
	else
		return (a);
}
/*int main()
{
	printf("%d\n", ft_recursive_power(-2, 10));
}*/
