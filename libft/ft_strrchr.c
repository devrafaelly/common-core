/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:55:15 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 19:55:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	len = ft_strlen(s);

	if (c == 0)
		return (&s[len]);
	while (s[len] && len >= 0)
	{
		if (s[len] == c)
			return (&s[len]);
		len--;
	}
	return (0);
}