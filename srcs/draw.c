/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:31:21 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/25 19:13:18 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	draw_mandelbrot(t_fractal *fractal)
{
	fractal->x = 0;
	while (fractal->x < WIDTH)
	{
		fractal->y = 0;
		while (fractal->y < HEIGHT)
		{
			calculate_mandelbrot(fractal);
			fractal->y++;
		}
		fractal->x++;
	}
}

void	draw_julia(t_fractal *fractal)
{
	fractal->x = 0;
	while (fractal->x < WIDTH)
	{
		fractal->y = 0;
		while (fractal->y < HEIGHT)
		{
			calculate_julia(fractal);
			fractal->y++;
		}
		fractal->x++;
	}
}

void	draw_tricorn(t_fractal *fractal)
{
	fractal->x = 0;
	while (fractal->x < WIDTH)
	{
		fractal->y = 0;
		while (fractal->y < HEIGHT)
		{
			calculate_tricorn(fractal);
			fractal->y++;
		}
		fractal->x++;
	}
}
