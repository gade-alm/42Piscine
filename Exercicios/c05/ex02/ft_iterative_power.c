/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:24:46 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/29 17:54:20 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int	b;

	b = nb;
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		b = b * nb;
		power--;
	}
	return (b);
}

/*int main()
{
	printf("%d",ft_iterative_power(-7, 7));
}*/
