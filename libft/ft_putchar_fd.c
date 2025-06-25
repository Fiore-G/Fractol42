/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:45:10 by figarcia          #+#    #+#             */
/*   Updated: 2024/10/16 17:22:05 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('C', 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('D', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
