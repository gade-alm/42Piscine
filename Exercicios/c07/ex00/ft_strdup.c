/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:17:08 by gade-alm          #+#    #+#             */
/*   Updated: 2022/02/02 16:58:51 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strdup(char *src)
{
	char *ptr;
	int size;
	int a;

	while (src[size])
	{
		size++;
	}
	ptr = malloc(sizeof((*src) * (size)));

	while (a <= size)
	{
		ptr[a] = src[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
