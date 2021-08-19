/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:14:04 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:53 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int n, int fd)
{
	char	c;

	if (n / 10 > 0)
		ft_putnbr_fd((n / 10), fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

static int	ft_numlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_print_u(void *nbr)
{
	int				len;
	unsigned int	n;

	n = (unsigned int)nbr;
	if ((int)n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = ft_numlen(n);
	ft_putnbr(n, 1);
	return (len);
}
