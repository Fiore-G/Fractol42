/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:05:45 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/06 15:47:08 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size_of_element)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;
	char	*temp_ptr;

	total_size = num_elements * size_of_element;
	ptr = malloc(total_size);
	temp_ptr = (char *)ptr;
	i = 0;
	if (num_elements > 0 && size_of_element > 0
		&& total_size / num_elements != size_of_element)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		temp_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	*arr;
	size_t	num_elements = 5;
	size_t	i;
	
	i = 0;
	arr = (int *)ft_calloc(num_elements, sizeof(int));
	if (arr == NULL)
	{
		printf("Error al asignar memoria.\n");
		return (1);
	}
	while (i < num_elements)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free (arr);
	return (0);
}*/
