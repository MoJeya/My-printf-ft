/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:43:03 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:49 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putstr(int c)
{
	write(1, &c, 1);
}

int	ft_print_s(char const *str)
{
	int		strLen;
	int		i;
	char	c;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	strLen = ft_strlen(str);
	while (str[i] != '\0')
	{
		c = str[i];
		putstr(c);
		i++;
	}
	return (strLen);
}
