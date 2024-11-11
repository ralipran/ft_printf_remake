/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:27:57 by ralipran          #+#    #+#             */
/*   Updated: 2024/11/11 11:53:37 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write(char c, int *count)
{
	int	success;

	if (*count != -1)
	{
		success = write(1, &c, 1);
		if (success == -1)
			*count = -1;
		else
			*count += success;
	}
}
