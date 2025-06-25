/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:39:09 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/25 18:29:27 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_alnum[] = {'N', '0', '8', '(', '+', '3', 'r', 'l', '5'};
	int	size = sizeof(test_alnum) / sizeof(test_alnum[0]);
	int	i;

	printf("Pruebas de alnum:\n");
	i = 0;
	while (i < size)
	{
		char	c = test_alnum[i];
		if (ft_isalnum(c))
			printf("El caracter '%c' es alfanumerico.\n", c);
		else
			printf("El caracter '%c' no es alfanumerico.\n", c);
		i++;
	}
	return (0);
}*/
