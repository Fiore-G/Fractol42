/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:57:58 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:15 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cut;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	cut = (char *)malloc(sizeof(char) * (len - 1));
	if (cut == NULL)
		return (NULL);
	ft_strlcpy(cut, &s1[start], len + 1);
	return (cut);
}
/*
int	main(void)
{
	char	*str = "  **Well, well, well**       ";
	char	*set = " ";
	char	*result = ft_strtrim(str, set);

	if (result != NULL)
	{
		printf("Resultado recortado: %s\n", result);
		free(result);
	}
	else
		printf("Error al recortar la cadena.\n");
	return (0);
}*/
