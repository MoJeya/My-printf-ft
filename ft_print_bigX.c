/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bigX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 17:21:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:58:16 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(unsigned long long adr)
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

	if (adr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	c = ' ';
	while (end > 0)
	{
		c = str[end - 1];
		ft_putchar_fd(c, 1);
		end--;
	}
	return (0);
}

int	ft_print_bigX(int adr)
{
	int						i;
	char					*str;
	unsigned long long		r;
	unsigned long long		adress;

	adress = (unsigned long long)adr;
	str = (char *)malloc(ft_numlen(adress) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (adress != 0 && i < 8)
	{
		r = adress % 16;
		adress /= 16;
		if (r < 10)
			str[i] = r + '0';
		else
			str[i] = r + 55;
		i++;
	}
	str[i] = '\0';
	i += ft_printrStr(str, i, adr);
	free(str);
	return (i);
}
