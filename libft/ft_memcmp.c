/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:47:15 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/12 16:20:53 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				result;
	unsigned long	cnt;
	unsigned char	*str1;
	unsigned char	*str2;

	result = 0;
	cnt = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (cnt < n)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			return (result = (int)str1[0] - (int)str2[0]);
		}
		cnt++;
	}
	return (0);
}
