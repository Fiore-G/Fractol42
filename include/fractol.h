/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:38:09 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/21 15:53:25 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include "libft.h"
# include "mlx.h"

# define WIDTH 1024
# define HEIGHT 1024

# define ESC 65307
# define UP 65362
# define DOWN 65364
# define LEFT 65361
# define RIGHT 65363
# define C_KEY 99
# define SCROLL_UP 4
# define SCROLL_DOWN 5
# define BASE_MOVE 50
# define ZOOM_LEVEL 1.2

typedef struct s_fractal
{
	void	*mlx;
	void	*window;
	void	*image;
	void	*img_addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		x;
	int		y;
	double	zx;
	double	zy;
	double	cx;
	double	cy;
	double	offset_x;
	double	offset_y;
	double	zoom;
	int		max_iter;
	int		color;
	char	*name;
}	t_fractal;

int		exit_fractal(void *param);
void	color_pixel(t_fractal *fractal, int x, int y, int color);
double	get_decimal(const char *str);
double	ft_atof(const char *str);
void	zoom(t_fractal *fractal, int x, int y, int zoom);
int		key_hook(int key_code, t_fractal *fractal);
int		mouse_hook(int mouse_code, int x, int y, t_fractal *fractal);
void	calculate_mandelbrot(t_fractal *f);
void	calculate_julia(t_fractal *f);
void	calculate_tricorn(t_fractal *f);
void	init_fractal(t_fractal *fractal, int argc, char **argv);
void	init_mlx(t_fractal *fractal);
void	draw_mandelbrot(t_fractal *fractal);
void	draw_julia(t_fractal *fractal);
void	draw_tricorn(t_fractal *fractal);
int		draw_fractal(t_fractal *fractal);
void	change_color(int *color_base);

#endif
