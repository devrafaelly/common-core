/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:46:27 by marvin            #+#    #+#             */
/*   Updated: 2025/07/23 12:00:07 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	if (len > 0)
	{
		while (*big)
		{
			if (*big == *little)
			{
				if (ft_strncmp(big, little, len) == 0)
					return ((char *)big);
			}
			big++;
		}
	}
	return (0);
}
