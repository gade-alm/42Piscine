/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:56:16 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/25 18:52:21 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 64 & str[a] < 91)
		{
		str[a] = str[a] + 32;
		}
		a++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (!(str[a - 1] >= 'a' && str[a - 1] <= 'z')
			&& (!(str[a - 1] >= 'A' && str[a - 1] <= 'Z'))
			&& (!(str[a - 1] >= '0' && str[a - 1] <= '9'))
			&& (str[a] >= 'a' && str[a] <= 'z'))
		{
				str[a] -= 32;
		}
		a++;
	}
	return (str);
}
