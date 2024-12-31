/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:38:54 by haslan            #+#    #+#             */
/*   Updated: 2023/10/31 14:45:07 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

unsigned int	ft_unsigned(unsigned int number)
{
	char			x;
	unsigned int	i;
	unsigned int	step;

	i = 0;
	step = ft_step(number, 10, 0);
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
