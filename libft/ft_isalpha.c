/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:46:29 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/25 17:55:06 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_chars[] = {'a', 'f', '0', '*', '7', 'H'};
	int	i;

	printf("Pruebas de ft_isalpha:\n");
	i = 0;
	while (test_chars[i] != '\0')
	{
		char	c = test_chars[i];

		if (ft_isalpha(c))
		       	printf("El caracter '%c'es una letra.\n", c);
		else
			printf("El caracter '%c' no es una letra.\n", c);
		i++;
	}
	return (0);
}*/
