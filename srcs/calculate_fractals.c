/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_fractals.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:30:40 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/25 19:12:51 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	calculate_mandelbrot(t_fractal *f)
{
	int			i;
	double		x_temp;

	i = 0;
	f->zx = 0.0;
	f->zy = 0.0;
	f->cx = (f->x / f->zoom) + f->offset_x;
	f->cy = (f->y / f->zoom) + f->offset_y;
	while (i < f->max_iter && f->zx * f->zx + f->zy * f->zy <= 4.0)
	{
		x_temp = f->zx * f->zx - f->zy * f->zy + f->cx;
		f->zy = 2.0 * f->zx * f->zy + f->cy;
		f->zx = x_temp;
		i++;
	}
	if (i == f->max_iter)
		color_pixel(f, f->x, f->y, 0x000000);
	else
		color_pixel(f, f->x, f->y, f->color * i);
}

void	calculate_julia(t_fractal *f)
{
	int			i;
	double		x_temp;

	i = 0;
	f->zx = (f->x / f->zoom) + f->offset_x;
	f->zy = (f->y / f->zoom) + f->offset_y;
	while (i < f->max_iter && f->zx * f->zx + f->zy * f->zy <= 4.0)
	{
		x_temp = f->zx * f->zx - f->zy * f->zy + f->cx;
		f->zy = 2.0 * f->zx * f->zy + f->cy;
		f->zx = x_temp;
		i++;
	}
	if (i == f->max_iter)
		color_pixel(f, f->x, f->y, 0x000000);
	else
		color_pixel(f, f->x, f->y, f->color * i);
}

void	calculate_tricorn(t_fractal *f)
{
	int		i;
	double	x_temp;

	i = 0;
	f->zx = 0.0;
	f->zy = 0.0;
	f->cx = (f->x / f->zoom) + f->offset_x;
	f->cy = (f->y / f->zoom) + f->offset_y;
	while (i < f->max_iter && f->zx * f->zx + f->zy * f->zy <= 4.0)
	{
		x_temp = f->zx * f->zx - f->zy * f->zy + f->cx;
		f->zy = -2.0 * f->zx * f->zy + f->cy;
		f->zx = x_temp;
		i++;
	}
	if (i == f->max_iter)
		color_pixel(f, f->x, f->y, 0x000000);
	else
		color_pixel(f, f->x, f->y, f->color * i);
}
