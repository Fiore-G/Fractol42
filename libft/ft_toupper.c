/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:03:27 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/29 19:13:45 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
/*
int	main(void)
{
	char	lower = 'h';
	char	upper = ft_toupper(lower);

	printf("Original: %c, Convertido: %c\n", lower, upper);

	char	non_alpha = '1';
	char	result = ft_toupper(non_alpha);

	printf("Original: %c, No convertido: %c\n", non_alpha, result);
	return (0);
}*/
