/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_keys_events.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:31:48 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/25 19:14:24 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	zoom(t_fractal *fractal, int x, int y, int direction)
{
	double	mouse_x;
	double	mouse_y;
	double	mouse_factor;

	if (direction == 1)
		mouse_factor = ZOOM_LEVEL;
	else if (direction == -1)
		mouse_factor = 1.0 / ZOOM_LEVEL;
	else
		return ;
	mouse_x = (double)x / fractal->zoom + fractal->offset_x;
	mouse_y = (double)y / fractal->zoom + fractal->offset_y;
	fractal->zoom *= mouse_factor;
	fractal->offset_x = mouse_x - (double)x / fractal->zoom;
	fractal->offset_y = mouse_y - (double)y / fractal->zoom;
}

int	key_hook(int key_code, t_fractal *fractal)
{
	if (key_code == ESC)
		exit(0);
	else if (key_code == LEFT)
		fractal->offset_x -= BASE_MOVE / fractal->zoom;
	else if (key_code == RIGHT)
		fractal->offset_x += BASE_MOVE / fractal->zoom;
	else if (key_code == UP)
		fractal->offset_y -= BASE_MOVE / fractal->zoom;
	else if (key_code == DOWN)
		fractal->offset_y += BASE_MOVE / fractal->zoom;
	else if (key_code == C_KEY)
		change_color(&fractal->color);
	else
		return (0);
	draw_fractal(fractal);
	return (0);
}

int	mouse_hook(int mouse_code, int x, int y, t_fractal *fractal)
{
	if (mouse_code == SCROLL_UP)
		zoom(fractal, x, y, 1);
	else if (mouse_code == SCROLL_DOWN)
		zoom(fractal, x, y, -1);
	draw_fractal(fractal);
	return (0);
}
