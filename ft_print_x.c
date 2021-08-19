/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:39:21 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:58 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long adr)
{
	int	len;

	len = 0;
	while (adr > 0)
	{
		adr /= 10;
		len++;
	}
	return (len);
}

static int	ft_printrStr(char *str, int end, int adr)
{
	char	c;

	c = ' ';
	if (adr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (end > 0)
	{
		c = str[end - 1];
		ft_putchar_fd(c, 1);
		end--;
	}
	return (0);
}

int	ft_print_x(int adr)
{
	int					i;
	char				*str;
	unsigned long long	r;
	unsigned long long	adress;

	str = (char *)malloc((ft_len((unsigned long long)adr)) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	adress = (unsigned long long)adr;
	while (adress > 0 && i < 8)
	{
		r = adress % 16;
		if (r < 10)
			str[i] = r + '0';
		else
			str[i] = r + 87;
		adress /= 16;
		i++;
	}
	str[i] = '\0';
	i += ft_printrStr(str, i, adr);
	free(str);
	return (i);
}
