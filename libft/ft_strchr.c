/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:22:40 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/21 18:36:15 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Hello, World!";
	char *result = ft_strchr(str, 'o');
	if (result != NULL)
    	printf("Caracter encontrado en: %s\n", result);
	else
    	printf("Caracter no encontrado\n");
}*/
