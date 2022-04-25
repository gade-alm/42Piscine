/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:50:57 by gade-alm          #+#    #+#             */
/*   Updated: 2022/02/02 10:44:15 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	abc[3];

	abc[0] = '0';
	while (abc[0] <= '9')
	{
	abc[1] = abc[0] + 1;
		while (abc[1] <= '9')
		{
		abc[2] = abc[1] + 1;
			while (abc[2] <= '9')
			{
				ft_putchar(abc[0]);
				ft_putchar(abc[1]);
				ft_putchar(abc[2]);
				if (abc[0] != '7' || abc[1] != '8' || abc[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}	
				abc[2]++;
			}
			abc[1]++;
		}
abc[0]++;
	}
}
