/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:43:38 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 09:21:51 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int ft_strncmp(const char *s1, char *s2, int n)
{
    if ( s1 == NULL || s2 == NULL || n <= 0)
		return (0);
	while (*s1 == *s2 && n > 0 && *s1 != '\0')
    {
        ++s1;
        ++s2;
        --n;
    }
    return (*s1 - *s2);
}

void	ft_putstr_fd(char *s, int fd)
{
    int	i;

    if (s == NULL || fd < 0)
        return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}