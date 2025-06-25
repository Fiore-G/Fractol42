/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:46:24 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/05 21:36:06 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_isprint[] = {'!', '\n', ' ', '@', '\f', '%', '\t'};
	int	size = sizeof(test_isprint) / sizeof(test_isprint[0]);
	int	i;

	printf("Pruebas de isprint:\n");
	i = 0;
	while (i < size)
	{
		char	c = test_isprint[i];
		if (ft_isprint(c))
			printf("El caracter '%c' es printable.\n", c);
		else
			printf("El caracter '%c' no es printable.\n", c);
		i++;
	}
	return (0);
}*/
