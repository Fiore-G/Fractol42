/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:38:55 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/21 18:43:12 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num_bytes)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num_bytes)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	array[10];
	size_t	i;

	ft_memset(array, 'F', sizeof(array));
	i = 0;
	while (i < sizeof(array))
	{
		printf("%c", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
