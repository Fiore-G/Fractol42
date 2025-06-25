/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:31:38 by figarcia          #+#    #+#             */
/*   Updated: 2025/06/25 19:13:43 by figarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	draw_fractal(t_fractal *fractal)
{
	if (ft_strncmp(fractal->name, "mandelbrot", 10) == 0)
		draw_mandelbrot(fractal);
	else if (ft_strncmp(fractal->name, "julia", 5) == 0)
		draw_julia(fractal);
	else if (ft_strncmp(fractal->name, "tricorn", 7) == 0)
		draw_tricorn(fractal);
	else
	{
		ft_putendl_fd("Available fractals: mandelbrot / julia / tricorn", 1);
		exit_fractal(fractal);
	}
	mlx_put_image_to_window(fractal->mlx, fractal->window,
		fractal->image, 0, 0);
	return (0);
}

int	main(int argc, char **argv)
{
	t_fractal	*fractal;

	if ((argc == 2) || (argc == 4 && ft_strncmp(argv[1], "julia", 5) == 0))
	{
		fractal = malloc(sizeof(t_fractal));
		if (!fractal)
			return (1);
		fractal->name = argv[1];
		init_fractal(fractal, argc, argv);
		init_mlx(fractal);
		mlx_key_hook(fractal->window, key_hook, fractal);
		mlx_mouse_hook(fractal->window, mouse_hook, fractal);
		mlx_hook(fractal->window, 17, 0L, exit_fractal, fractal);
		draw_fractal(fractal);
		mlx_loop(fractal->mlx);
	}
	else
	{
		ft_putendl_fd("Usage: ./fractol <fractal_name>", 1);
		ft_putendl_fd("Available fractals: mandelbrot / julia / tricorn", 1);
	}
	return (0);
}
