/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:39:14 by haslan            #+#    #+#             */
/*   Updated: 2023/11/09 11:28:20 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	check(va_list arg, char format)
{
	if (format == 'c')
		return (format = va_arg(arg, int), write(1, &format, 1));
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *), 0));
	else if (format == 'd' || format == 'i')
		return (ft_int_number(va_arg(arg, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(arg, unsigned int)));
	else if (format == 'p')
		return (ft_pointer(va_arg(arg, u_int64_t), "0123456789abcdef"));
	else if (format == 'x' || format == 'X')
		return (ft_hexnumber(va_arg(arg, unsigned int), format));
	else if (format == '%')
		return (write(1, "%", 1));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		j;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			j = check(arg, *(++str));
			if (j == -1)
				return (-1);
			len += j;
		}
		else
		{
			if (write(1, &(*str), 1) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(arg);
	return (len);
}
