/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:39:27 by haslan            #+#    #+#             */
/*   Updated: 2023/11/09 11:44:35 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

unsigned int	ft_int_number(int number)
{
	char			x;
	unsigned int	i;
	int				step;

	i = 0;
	if (number == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (number < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		i++;
		number *= -1;
	}
	step = (int)ft_step(number, 10, 0);
	while (step > 0)
	{
		x = ((number / step) + 48);
		if (write(1, &x, 1) == -1)
			return (-1);
		i++;
		number = number - ((number / step) * step);
		step /= 10;
	}
	return (i);
}
