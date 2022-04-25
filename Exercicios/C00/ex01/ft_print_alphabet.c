/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:44:48 by gade-alm          #+#    #+#             */
/*   Updated: 2022/02/02 10:42:51 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 27);
}

void	ft_print_alphabet(void)
{
	char	alf;

	alf = 'a';
	while (alf <= 'z')
	{
		write(1, &alf, 1);
	alf++;
	}
}
