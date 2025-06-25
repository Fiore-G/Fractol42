/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:27:34 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/14 20:07:16 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	num;

	num = n;
	i = get_num_length(num);
	result = (char *)ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (num > 0)
	{
		result[--i] = num % 10 + '0';
		num = num / 10;
	}
	return (result);
}
/*
int	main(void)
{
	int	num = -2147483648;
	char	*num_str = ft_itoa(num);

	if (num_str != NULL)
	{
		printf("Entero a string: %s\n", num_str);
		free(num_str);
	}
	else
		printf("Error al asignar la memoria.\n");
	return (0);
}
*/
