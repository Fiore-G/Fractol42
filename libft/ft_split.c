/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:12:08 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/21 18:38:07 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		len;

	len = end - start;
	if (s == NULL || start < 0 || end <= start)
		return (NULL);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

static void	free_split(char **result, int word_index)
{
	while (word_index >= 0)
	{
		free(result[word_index]);
		word_index--;
	}
	free(result);
}

static int	split_words(char **result, char const *s, char c)
{
	int	start;
	int	word_index;
	int	end;

	start = 0;
	word_index = 0;
	while (s[start] != '\0')
	{
		while (s[start] == c)
			start++;
		if (s[start] == '\0')
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		result[word_index] = word_dup(s, start, end);
		if (!result[word_index])
			return (free_split(result, word_index - 1), 0);
		word_index++;
		start = end;
	}
	result[word_index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (result == NULL)
		return (NULL);
	if (!split_words(result, s, c))
		return (NULL);
	return (result);
}
/*
int	main(void)
{
	char	*string = "Vamos a hacer split";
	char	**resultado = ft_split(string, ' ');
	int	i = 0;
	
	if (resultado)
	{
		while (resultado[i] != NULL)
		{
			printf("%s\n", resultado[i]);
			i++;
		}
		free_split(resultado, i);
	}
	else
		printf("Fallo al reservar la memoria.\n");
	return (0);
}*/
