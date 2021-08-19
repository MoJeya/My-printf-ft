/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:59:50 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:33 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(int c)
{
	write(1, &c, 1);
}

static int	countByts(int n)
{
	int	len;
	int	num;

	len = 0;
	num = n;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	ft_conerCase(void)
{
	char	*s;
	int		length;

	length = 0;
	s = ft_strdup("-2147483648");
	if (!s)
		return (-1);
	ft_putstr_fd(s, 1);
	length = ft_strlen(s);
	free(s);
	return (length);
}

int	ft_print_d(int n)
{
	char	c;
	int		len;

	if (n == -2147483648)
		return (ft_conerCase());
	len = countByts(n);
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n / 10 > 0)
		ft_print_d(n / 10);
	c = (n % 10) + '0';
	ft_putchar(c);
	return (len);
}
