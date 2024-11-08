#ifndef FRACTOL_H
# define FRACTOL_H

#include <stdio.h> // tirar daq dps
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "minilibx-linux/mlx.h"

# define ERROR_MESSAGE "Please enter \n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <value_1> <value_2>\"\n"
# define VALUE_FD 1

typedef struct s_img
{
    void    *img_ptr;
    char    *pixels_ptr;
    int     bpp;
    int     endian;
    int     line_len;
} t_img;

typedef struct  s_fractal 
{
    void    *mlx_connection;
    void    *mlx_window;
    t_img   img;
} t_fractal;

int     ft_strncmp(const char *s1, char *s2, int n);
void	ft_putstr_fd(char *s, int fd);


#endif