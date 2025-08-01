/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:10:39 by codespace         #+#    #+#             */
/*   Updated: 2025/07/25 21:37:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
        char    res;
        if (n == -2147483648)
        {
                write(fd, "-2147483648", 11);
                return;
        }
        if (n < 0)
        {
                n *= -1;
                write(fd, "-", 1);
        }
        if (n > 9)
        {
                ft_putnbr_fd(n / 10, fd);
                ft_putnbr_fd(n % 10, fd);
        }
        else
        {
                res = n + '0';
                write(fd, &res, 1);
        }
}
