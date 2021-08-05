/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:09:40 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/12 16:18:31 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	cnt;
	unsigned char	*src;
	unsigned char	ch;

	src = (unsigned char *)s;
	ch = (char)c;
	cnt = 0;
	while (n)
	{
		if (*src == ch)
			break ;
		src++;
		--n;
	}
	if (n != 0)
		return (src);
	else
		return (NULL);
}
