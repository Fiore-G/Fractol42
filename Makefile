# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: figarcia <figarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 21:55:34 by figarcia          #+#    #+#              #
#    Updated: 2025/05/15 22:02:21 by figarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include -I./libft -I./mlx

LIBPATH = ./libft
LIBFT = $(LIBPATH)/libft.a
LIB = -L$(LIBPATH) -lft

MLXPATH = ./mlx
MLX = $(MLXPATH)/libmlx.a

SRCS = ./srcs/main.c                 \
       ./srcs/utils.c                \
	   ./srcs/mouse_keys_events.c    \
	   ./srcs/init.c                 \
	   ./srcs/draw.c                 \
	   ./srcs/calculate_fractals.c   \
	   ./srcs/colors.c

OBJS = $(SRCS:.c=.o)

NAME = fractol

all: $(NAME)

$(NAME):	$(OBJS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(INCLUDES) $(LIB) -L$(MLXPATH) -lmlx -lX11 -lXext -lm -lbsd

%.o:%.c	Makefile ./include/fractol.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBPATH)

$(MLX):
	$(MAKE) -C $(MLXPATH)

clean:
	$(MAKE) clean -C $(LIBPATH)
	$(MAKE) clean -C $(MLXPATH)
	rm -f $(OBJS)

fclean: clean 
	$(MAKE) fclean -C $(LIBPATH)
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all libft mlx

