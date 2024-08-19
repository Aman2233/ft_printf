/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:48:31 by amamo             #+#    #+#             */
/*   Updated: 2024/03/26 08:48:33 by amamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str1)
{
	int	len;

	if (!str1)
	{
		if (write (1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	len = 0;
	while (*str1 != '\0')
	{
		if (write(1, str1, 1) == -1)
			return (-1);
		len++;
		str1++;
	}
	return (len);
}
