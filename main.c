

#include "fractol.h"

int main(int ac, char **av)
{
    t_fractal   fractal;

    if (ac == 2 && !ft_strncmp(av[1], "mandelbrot", 10) || \
    ac == 4 && !ft_strncmp(av[1], "julia", 5))
    {
        
    }
    else
    {
        ft_putstr_fd(ERROR_MESSAGE, VALUE_FD);
        exit(EXIT_FAILURE);
    }
}