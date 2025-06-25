/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:29:11 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/28 18:40:00 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num_bytes)
{
	unsigned char		*destt;
	const unsigned char	*srcc;
	size_t				i;

	if (dest == NULL && src == NULL && num_bytes > 0)
		return (NULL);
	destt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	i = 0;
	while (i < num_bytes)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Ariana Grande";
	char	dest[15] = "";

	ft_memcpy(dest, src, sizeof(src));
	printf("Contenido de dest:%s\n", dest);
	return (0);
}*/
