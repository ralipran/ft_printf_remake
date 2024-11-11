/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:51:56 by ralipran          #+#    #+#             */
/*   Updated: 2024/11/11 11:52:13 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long int n,
	const char *str_base, int base, int *count)
{
	if (n >= (unsigned long int)base)
		ft_putnbr_base(n / base, str_base, base, count);
	ft_write(*(str_base + (n % base)), count);
}

void	ft_putnbr(long nb, int *count)
{
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_write('-', count);
		ft_putnbr_base(-nb, "0123456789", 10, count);
	}
	else
		ft_putnbr_base(nb, "0123456789", 10, count);
}
