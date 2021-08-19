/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 13:00:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:46 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putAdress(const char *str, int i, void *p)
{
	char	c;

	c = ' ';
	if (!p)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i > 0)
	{
		c = str[i - 1];
		ft_putchar_fd(c, 1);
		i--;
	}
	return (0);
}

static int	ft_len(unsigned long long adr)
{
	int	i;

	i = 0;
	while (adr > 0)
	{
		adr /= 16;
		i++;
	}
	return (i);
}

int	ft_print_p(void *adr)
{
	char					*str;
	unsigned long long		adress;
	unsigned long long		rest;
	int						i;

	write(1, &"0x", 2);
	str = (char *)malloc(ft_len((unsigned long long)adr) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	adress = (unsigned long long)adr;
	while (adress != 0)
	{
		rest = adress % 16;
		if (rest < 10)
			str[i] = rest + 48;
		else
			str[i] = rest + 87;
		adress /= 16;
		i++;
	}
	i += ft_putAdress(str, i, adr);
	free(str);
	return (i + 2);
}
