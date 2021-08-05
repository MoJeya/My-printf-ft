/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:08:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/12 16:13:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*source;
	unsigned long		cnt;

	cnt = 0;
	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if ((dest == 0) && (source == 0))
		return (0);
	if (source > dest)
		ft_memcpy(dest, source, n);
	else
	{
		while (n)
		{
			dest[n - 1] = source[n - 1];
			--n;
		}
	}
	return (dest);
}
