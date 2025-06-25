/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:43:13 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/21 18:30:01 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	digit;

	i = 0;
	sign = 1;
	digit = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = digit * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * digit);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("     +123"));
	printf("%d\n", ft_atoi("   +--+-++36387"));
	printf("%d\n", ft_atoi("     + 487"));
	printf("%d\n", ft_atoi("  abcd545"));
	printf("%d\n", ft_atoi("   -2147483648"));
	printf("%d\n", ft_atoi("    2147483647"));
	return (0);
}*/
