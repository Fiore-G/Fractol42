/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:16:19 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/25 18:48:32 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num_bytes)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num_bytes)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	array[15];
	size_t	i;

	ft_bzero(array, sizeof(array));
	printf("Contenido del array: ");
	i = 0;
	while (i < sizeof(array))
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
