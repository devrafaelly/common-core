/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:05:15 by codespace         #+#    #+#             */
/*   Updated: 2025/08/01 16:48:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
        if (!s)
                return;
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);
}
