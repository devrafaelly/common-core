/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:02:55 by codespace         #+#    #+#             */
/*   Updated: 2025/07/29 13:21:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
        char            *strjoin;
        size_t     s1_len;
        size_t     s2_len;
        size_t     str_len;
        size_t     i;

        if (!s1 || !s2)
                return (NULL);
        s1_len = ft_strlen(s1);
        s2_len = ft_strlen(s2);
        str_len = s1_len + s2_len;
        strjoin = malloc(str_len + 1);
        if (!strjoin)
                return (NULL);
        i = 0;
        while (s1[i])
        {
                strjoin[i] = s1[i];
                i++;
        }
        ft_strlcat(&strjoin[i], s2, s2_len + 1);
        return (strjoin);
}