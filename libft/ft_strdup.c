/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:10:10 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/07/25 21:47:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *s_cpy;
	size_t	len;
	size_t	i;
	
	len = ft_strlen(s);
	s_cpy = malloc(len + 1 * sizeof(char));
	if (!s_cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_cpy[i] = s[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}