/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:12:56 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/07/24 12:40:46 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

static	int	buffer_size()
{
	int	i;
    
	i = 0;
	if (n < 0)
	{
	    n = -n;
	    i++;
	}
	while (n > 9)
	{
	    n = n / 10;
	    i++;
	}
	return (i + 1);
}

static 	char    *set_str(char *str, int n, int buffer)
{
	str[buffer] = '\0';
	buffer--;
	if (n == 0)
	{
		str[buffer] = '0';
		return (str);
	}
	if (n == -2147483648)
	{
		str[buffer] = '8';
		n = -214748364;
		buffer--;
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str = set_nbr(str, n, buffer);
	return (str);
}

static	char	*set_nbr(char *str, int n, int buffer)
{
	while (n > 9)
	{
		str[buffer] = (n % 10) + '0';
		n = n / 10;
		buffer--;
	}
	str[buffer] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	buffer;

	if (n == 0)
		buffer = 1;
	else if (n == -2147483648)
		buffer = 11;
	else
		buffer = buffer_size(n);
	str = malloc(buffer + 1);
	if (!str)
		return (NULL);
	str = set_str(str, n, buffer);
	return (str);
}
