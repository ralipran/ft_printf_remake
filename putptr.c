/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:50:58 by ralipran          #+#    #+#             */
/*   Updated: 2024/11/11 11:51:44 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	uintptr_t	ptr_as_nbr;

	ptr_as_nbr = (uintptr_t) ptr;
	ft_write('0', count);
	ft_write('x', count);
	ft_putnbr_base(ptr_as_nbr, "0123456789abcdef", 16, count);
}
