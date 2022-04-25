/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:59:39 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/27 13:56:59 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	a;
	int	negative;
	int	conv;

	a = 0;
	negative = 1;
	conv = 0;
	while ((str[a] == '\t') || (str[a] == '\n') || (str[a] == '\v')
		|| (str[a] == '\f') || (str[a] == '\r') || (str[a] == ' '))
		a++;
	if (str[a] == '-')
	{
			negative *= -1;
	}
	if (str[a] == '-' || str[a] == '+')
	{
				a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		conv = conv * 10 + str[a] - 48;
				a++;
	}		
	return (conv * negative);
}
