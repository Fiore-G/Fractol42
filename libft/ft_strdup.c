/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:23:19 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/06 14:42:58 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, str, len + 1);
	return (copy);
}
/*
int	main(void)
{
	char	*strng = "Que se duplique";
	char	*dup = ft_strdup(strng);

	if (dup == NULL)
	{
		printf("La memoria no pudo ser asignada.\n");
		return (1);
	}
	printf("Esta es la cadena original: %s\n", strng);
	printf("Esta es la cadena duplicada: %s\n", dup);
	free(dup);
	return (0);
}*/
