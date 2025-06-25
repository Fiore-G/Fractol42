/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:43:28 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/14 21:34:43 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen (s) + 1));
	if (!new_str)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char	ft_lowercase(unsigned int index, char c)
{
	(void)index;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int	main(void)
{
	char	*str = "HELLO THERE";
	char	*result = ft_strmapi(str, ft_lowercase);
	
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
		printf("No se pudo reservar la memoria.\n");
	return (0);
}*/
