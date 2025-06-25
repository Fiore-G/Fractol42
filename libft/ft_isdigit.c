/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:55:34 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/25 18:25:41 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	test_digits[] = {'9', 'a', '4', 'G', '0', '3', '-', '$'};
	int	size = sizeof(test_digits) / sizeof(test_digits[0]);
	int	i;

	printf("Pruebas de ft_isdigit:\n");
	i = 0;
	while (i < size)
	{
		int	c = test_digits[i];

		if (ft_isdigit(c))
			printf("El elemento '%c' es un digito:\n", c);
		else
			printf("El elemento '%c' no es un digito:\n", c);
		i++;
	}
	return (0);
}*/
