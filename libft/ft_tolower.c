/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:15:25 by figarcia          #+#    #+#             */
/*   Updated: 2024/09/29 19:20:42 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	return (c);
}
/*
int	main(void)
{
	char	upper = 'L';
	char	lower = ft_tolower(upper);

	printf("Original: %c, Convertido %c\n", upper, lower);

	char	non_alpha = '6';
	char	result = ft_tolower(non_alpha);

	printf("Original: %c, No convertido %c\n", non_alpha, result);
}*/
