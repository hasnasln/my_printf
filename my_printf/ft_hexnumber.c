/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:39:31 by haslan            #+#    #+#             */
/*   Updated: 2023/10/31 14:42:19 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

unsigned int	ft_hexnumber(unsigned int number, char format)
{
	char			*base;
	unsigned int	step_hex;
	int				i;
	char			x;

	i = 0;
	step_hex = ft_step(number, 16, 1);
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	while (step_hex > 0)
	{
		x = base[number / step_hex];
		if (write(1, &x, 1) == -1)
			return (-1);
		i++;
		number = number - ((number / step_hex) * step_hex);
		step_hex /= 16;
	}
	return (i);
}
