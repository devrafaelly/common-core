/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:02:20 by marvin            #+#    #+#             */
/*   Updated: 2025/08/11 17:02:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int res;

    res = 0;
    while(*format)
    {
        if (*format == '%')
            res += conversion_specifier(*(++format), ap);
        else
            res += write(1, format, 1);
        format++;
    }
    va_end(ap);
    return (res);
}

int conversion_specifier(char c, va_list ap)
{
    int res;

    res = 0;
    if (c == 'c')
        res += print_char(va_arg(ap, int));
    else if (c == 's')
        res += print_str(va_arg(ap, char *));
    else if (c == 'p')
        res += print_pointer(va_arg(ap, void *));
    else if (c == 'i' || c == 'd')
        res += print_s_nbr(va_arg(ap, int));
    else if (c == 'u')
        res += print_u_nbr(va_arg(ap, unsigned int));
    else if (c == 'x' || c == 'X')
        res += print_hexa(va_arg(ap, unsigned int), c);
    else if (c == '%')
        res += write(1, &c, 1);
    else
        res += write(1, &c, 1);
    return (res);
}

int print_char(int c)
{
    int res;

    res = 0;
    res += write(1, &c, 1);
    return (res);
}

int print_str(char *str)
{
    int res;

    if (!str)
        return (0);
    res = 0;
    while (*str)
    {
        res += print_char(*str);
        str++;
    }
    return (res);
}

int print_s_nbr(int n)
{
    int res;

    res = 0;
	if (n == -2147483648)
	{
		res = print_str("-2147483648");
		return (res);
	}
	if (n < 0)
	{
		n *= -1;
		res += print_char('-');
	}
	res += print_u_nbr((unsigned int)n);
    return (res);
}

int print_u_nbr(unsigned int n)
{
    int res;

    res = 0;
    if (n > 9)
	{
		res += print_u_nbr(n / 10);
		res += print_u_nbr(n % 10);
	}
	else
		res += print_char(n + '0');
    return (res);
}

int print_hexa(unsigned int n, char c)
{
    char    *base;
    int res;

    if (c == 'x')
        base = "0123456789abcdef";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    res = 0;
    if (n >= 16)
    {
        res += print_hexa((n / 16), c);
        res += print_hexa((n % 16), c);
    }
    else
        res += print_char(base[n % 16]);
    return (res);
}

int print_hexa_long(unsigned long n)
{
    char    *base;
    int res;

    base = "0123456789abcdef";

    res = 0;
    if (n >= 16)
    {
        res += print_hexa_long((n / 16));
        res += print_hexa_long((n % 16));
    }
    else
        res += print_char(base[n % 16]);
    return (res);
}

int print_pointer(void *ptr)
{
    unsigned long   address;
    int res;

    if (!ptr)
        return (print_str("0x0"));
    address = (unsigned long)ptr;
    res = 0;
    res += print_str("0x");
    res += print_hexa_long(address);
    return (res);
}