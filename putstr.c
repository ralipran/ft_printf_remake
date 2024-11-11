/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:22 by ralipran          #+#    #+#             */
/*   Updated: 2024/11/11 11:52:36 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	char	*null_msg;

	if (str == NULL)
	{
		null_msg = "(null)";
		while (*null_msg)
		{
			ft_write(*null_msg, count);
			null_msg++;
		}
		return ;
	}
	while (*str)
		ft_write(*str++, count);
}
