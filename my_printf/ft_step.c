/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:38:59 by haslan            #+#    #+#             */
/*   Updated: 2023/11/09 11:30:46 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

u_int64_t	ft_step(u_int64_t number, unsigned int base, unsigned int chek)
{
	u_int64_t	step;

	step = 1;
	if (chek == 1 && (long int)number < 0)
		number = (long int)number * -1;
	while (step * base <= number)
	{
		step *= base;
		if (step * base < step)
			return (step);
	}
	return (step);
}
