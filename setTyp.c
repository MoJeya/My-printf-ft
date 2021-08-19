/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setTyp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:56:18 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:58:28 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	setTyp(char c, va_list arg, int *p)
{
	if (c == 'd' || c == 'i')
		(*p) += ft_print_d(va_arg(arg, int));
	if (c == 's')
		(*p) += ft_print_s(va_arg(arg, const char *));
	if (c == 'c')
		(*p) += ft_print_c(va_arg(arg, int));
	if (c == 'p')
		(*p) += ft_print_p(va_arg(arg, void *));
	if (c == 'x')
		(*p) += ft_print_x(va_arg(arg, int));
	if (c == 'X')
		(*p) += ft_print_bigX(va_arg(arg, int));
	if (c == '%')
	{
		(*p)++;
		ft_putchar_fd('%', 1);
	}
	if (c == 'u')
		(*p) += ft_print_u(va_arg(arg, void *));
}
