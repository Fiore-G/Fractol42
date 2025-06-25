/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:24:10 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/01 18:52:37 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*strng;
	unsigned char		ch;
	size_t				i;

	strng = (const unsigned char *)str;
	ch = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (strng[i] == ch)
			return ((void *)(strng + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "First day of discomfort.";
	char	character = 'd';
	size_t	bytes = 25;
	char	*result = ft_memchr(str, character, bytes);

	if (result != NULL)
		printf("Caracter encontrado: %s\n", result);
	else
		printf("Caracter no encontrado.\n");
	return (0);
}*/
