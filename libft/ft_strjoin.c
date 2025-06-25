/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:54:48 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/08 21:55:06 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	ft_strlcpy(concat, s1, len1 + 1);
	ft_strlcpy(&concat[len1], s2, len2 + 1);
	return (concat);
}
/*
int	main(void)
{
	char	*string1 = "Vamos a";
	char	*string2 = " concatenar";
	char	*result = ft_strjoin(string1, string2);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Error: No se pudo asignar memoria.\n");
	return (0);
}*/
