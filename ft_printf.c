/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:00:08 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:58:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkflag(int i, const char *format, int *p, va_list arg)
{
	int	sub;

	sub = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			sub--;
			if (ft_strchr("cspdiuxX%", format[i]))
			{
				sub--;
				setTyp(format[i], arg, p);
			}
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	return (i + sub + (*p));
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		p;
	int		i;

	i = 0;
	p = 0;
	va_start(arg, format);
	i = checkflag(i, format, &p, arg);
	va_end(arg);
	return (i);
}
