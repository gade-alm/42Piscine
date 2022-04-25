/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:59:28 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/25 13:25:51 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 32)
		{
			ft_putchar(str[a]);
		}
		if ((str[a] <= 31 && str[a] > '\0') || (str[a] > 127))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[a] / 16]);
			ft_putchar("0123456789abcdef"[str[a] % 16]);
		}
		a++;
	}	
}
