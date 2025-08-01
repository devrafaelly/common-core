/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:52:17 by codespace         #+#    #+#             */
/*   Updated: 2025/07/29 13:21:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

static  char    to_upper(unsigned int i, char c)
{
        return (ft_toupper(c));
}

static  char    to_lower(unsigned int i, char c)
{
    return (ft_tolower(c));
}

static  char    alternate_case(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    else
        return (ft_tolower(c));
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char            *new_str;
        unsigned int    len;
        unsigned int    i;

        if (!s)
                return (NULL);
        len = ft_strlen(s);
        new_str = malloc(len + 1);
        if (!new_str)
                return (NULL);
        i = 0;
        while(s[i])
        {
                new_str[i] = f(i, s[i]);
                i++;
        }
        new_str[i] = '\0';
        return (new_str);
}
