/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:21:35 by codespace         #+#    #+#             */
/*   Updated: 2025/07/29 13:21:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
        char    *address;
        size_t  address_size;
        size_t  i;

        address_size = (nmemb * size);
        if (address_size == 0)
        {
            address = malloc(1);
            address_size = 1;
        }
        else
            address = malloc(address_size);
        if (!address)
            return (NULL);
        i = 0;
        while (i < address_size)
        {
            address[i] = '\0';
            i++;
        }
        return (address);
}
