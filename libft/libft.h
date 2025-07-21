/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:50:47 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/07/21 18:10:03 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int	ft_isalnum(int nbr);
int	ft_isalpha(int nbr);
int	ft_isascii(int nbr);
int	ft_isdigit(int nbr);
int	ft_isprint(int nbr);
size_t	ft_strlen(const char *s);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *nptr);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif