/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:50:24 by codespace         #+#    #+#             */
/*   Updated: 2025/07/29 13:20:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *substr;
        size_t  str_len;

        if (!s)
                return (NULL);
        str_len = ft_strlen(s);
        if (start >= str_len)
        {
                substr = malloc(1);
                if (!substr)
                        return (NULL);
                substr[0] = '\0';
                return (substr);
        }
        if (start + len > str_len)
                len = str_len - start;
        substr = malloc((len + 1) * sizeof(char));
        if (!substr)
                return (NULL);
        ft_memcpy(substr, &s[start], len);
        substr[len] = '\0';
        return (substr);
}