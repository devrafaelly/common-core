/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:53:54 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/07/24 15:51:10 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	size_t			i;

	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dst > str)
	{
		while (n-- > 0)
		{
			dst[n] = str[n];
		}
	}
	else
	{
		while (i < n)
		{
			dst[i] = str[i];
			i++;
		}
	}
	return (dst);
}
