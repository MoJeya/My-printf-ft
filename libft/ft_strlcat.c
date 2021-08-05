/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:33:56 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/14 15:36:38 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	i;

	i = 0;
	dst_s = 0;
	while (dst[dst_s] != '\0' && dst_s < dstsize)
		dst_s++;
	src_s = 0;
	while (src[src_s] != '\0')
		src_s++;
	if (dstsize > dst_s)
	{
		while (i < (dstsize - dst_s - 1) && src[i] != '\0')
		{
			dst[dst_s + i] = src[i];
			i++;
		}
		dst[dst_s + i] = '\0';
	}
	else
		return (dstsize + src_s);
	return (dst_s + src_s);
}
