/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:26:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/12 16:10:02 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmpDST;
	const char	*tmpSRC;

	tmpDST = (char *)dst;
	tmpSRC = (const char *)src;
	if ((dst == 0) && (src == 0))
		return (0);
	while (n)
	{
		*(tmpDST++) = *(tmpSRC++);
		--n;
	}
	return (dst);
}
