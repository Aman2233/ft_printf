/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:31 by amamo             #+#    #+#             */
/*   Updated: 2024/07/01 13:47:42 by amamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(const char type, va_list vargs)
{
	if (type == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(vargs, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_putnbr(va_arg(vargs, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(vargs, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_putnbr_hexa(va_arg(vargs, unsigned int), type));
	else if (type == 'p')
		return (ft_putptr(va_arg(vargs, void *)));
	else if (type == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		len;
	int		check;

	va_start(vargs, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			check = ft_conversion(*(++format), vargs);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			len++;
		}
		format++;
	}
	va_end(vargs);
	return (len);
}
