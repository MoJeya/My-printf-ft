/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:55:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/12 16:06:13 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cnt1;
	size_t	cnt2;
	char	*str;

	str = (char *)b;
	cnt1 = 0;
	cnt2 = 0;
	while (cnt2 < len)
	{
		str[cnt2] = (char)c;
		cnt2++;
	}
	cnt1++;
	return (str);
}
