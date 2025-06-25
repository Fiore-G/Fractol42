/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:38:06 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/21 18:37:10 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurence;

	last_occurence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last_occurence = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)last_occurence);
}
/*
int	main(void)
{
	char	*strng = "Benvingut";
	char	*result = ft_strrchr(strng, 'n');
	
	if (result)
		printf("Ultima aparicion de 'n' es: %s\n", result);
	else
		printf("Caracter no encontrado en la cadena.\n");
	return (0);
}*/
