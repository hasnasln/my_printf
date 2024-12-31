/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:39:11 by haslan            #+#    #+#             */
/*   Updated: 2023/11/09 11:30:39 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);

int				ft_putstr(char *str, int chek);

unsigned int	ft_int_number(int number);

unsigned int	ft_hexnumber(unsigned int number, char mod);

unsigned int	ft_unsigned(unsigned int number);

unsigned int	ft_pointer(u_int64_t number, char *base);

u_int64_t		ft_step(u_int64_t number, unsigned int base, unsigned int chek);

#endif