/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:54:41 by amamo             #+#    #+#             */
/*   Updated: 2024/08/11 19:54:44 by amamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putptr(void *ptr)
{
    int    len;
    int    aux;

    len = 0;
    aux = 0;
    if (ft_putstr("0x") == -1)
        return (-1);
    len += 2;
    if (ptr == NULL) {
        if (ft_putstr("(NULL)") == -1)
            return (-1);
        len += 5; 
    } else {
        aux = ft_putnbr_hexa((unsigned long)ptr, 'x');
        if (aux == -1)
            return (-1);
        len += aux;
    }
    return (len);
}