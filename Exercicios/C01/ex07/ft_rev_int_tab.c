/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:19:08 by gade-alm          #+#    #+#             */
/*   Updated: 2022/01/20 15:34:22 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	swap;

	start = 0;
	while (start < size)
	{
		swap = tab[start];
		tab[start] = tab[size - 1];
		tab[size - 1] = swap;
		start++;
		size--;
	}
}
