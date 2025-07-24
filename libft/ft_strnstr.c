/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:46:27 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 15:08:39 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	strlen;
	size_t	i;

	strlen = ft_strlen(little);
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (len - i >= strlen)
		{
			if (ft_strncmp(&big[i], little, strlen) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
