/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:39:20 by haslan            #+#    #+#             */
/*   Updated: 2023/10/31 14:43:50 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

unsigned int	ft_pointer(u_int64_t number, char *base)
{
	u_int64_t		step;
	unsigned int	i;

	i = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	i += 2;
	step = ft_step(number, 16, 0);
	while (step > 0)
	{
		if (write(1, &base[(number / step)], 1) == -1)
			return (-1);
		i++;
		number = number - ((number / step) * step);
		step /= 16;
	}
	return (i);
}
