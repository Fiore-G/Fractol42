/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:04:18 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/25 20:19:03 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	change_color(int *color_base)
{
	int			total;
	static int	index;
	static int	colors[] = {0xFFD700, 0xFCBE11, 0x32CD32, 0x4A0080, 0xA9C3E0, 0xE4F6E8};

	total = sizeof(colors) / sizeof(colors[0]);
	index = (index + 1) % total;
	*color_base = colors[index];
}
