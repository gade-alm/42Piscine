/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:20:30 by gade-alm          #+#    #+#             */
/*   Updated: 2022/02/01 16:11:42 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	if (argc == 1)
	{
		while (argv[0][a] != '\0')
		{
			write(1, &argv[0][a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
}
