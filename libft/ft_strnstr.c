/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:46:27 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 18:46:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return (big);
	while (*big)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len) == 0)
				return (big);
		}
		big++;
	}
	return (0);
}
