/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:57:33 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/25 19:43:34 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	unsigned char	test_isascii[] = {'j', 'O', '0', '&', '$', 'u', ' '};
	int	size = sizeof(test_isascii) / sizeof(test_isascii[0]);
	int	i;

	printf("Pruebas isascii:\n");
	i = 0;
	while (i < size)
	{
		char	c = test_isascii[i];
		if (isascii(c))
			printf("El caracter '%c' es un ASCII de 7 bits.\n", c);
		else
			printf("El caracter '%c' no es un ASCII de 7 bits.\n", c);
		i++;
	}
	return (0);
}*/
