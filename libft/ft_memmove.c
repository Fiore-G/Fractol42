/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:43:04 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/16 20:25:27 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num_bytes)
{
	unsigned char		*destt;
	const unsigned char	*srcc;
	size_t				i;

	if (dest == NULL && src == NULL && num_bytes > 0)
		return (NULL);
	destt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	if (destt > srcc && destt < srcc + num_bytes)
	{
		i = num_bytes;
		while (i--)
			destt[i] = srcc[i];
	}
	else
	{
		i = 0;
		while (i < num_bytes)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)

{
	char	src[] = "Buenas noches";
	printf("Antes: %s\n", src);
	ft_memmove(src + 2, src, 5);
	printf("Despues: %s\n", src);
	return (0);
}*/
