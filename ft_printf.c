/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:00:08 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/05 16:08:32 by mjeyavat         ###   ########.fr       */
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
	int		*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = (int *)malloc(sizeof(int));
	if (p == NULL)
		return (0);
	va_start(arg, format);
	i = checkflag(i, format, p, arg);
	va_end(arg);
	free(p);
	return (i);
}
