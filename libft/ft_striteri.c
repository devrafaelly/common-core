/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:22:33 by codespace         #+#    #+#             */
/*   Updated: 2025/07/28 15:49:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  void    f(unsigned int, char* c)
{
        *c = ft_tolower(*c);
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
        unsigned int    i;

        if (!s)
                return;
        i = 0;
        while (s[i])
        {
                f(i, &s[i]);
                i++;
        }
}