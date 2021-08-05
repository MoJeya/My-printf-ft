/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:14:41 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/13 17:13:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*newStr;
	unsigned long	l_str;

	l_str = ft_strlen(s1);
	newStr = (char *) ft_calloc(l_str + 1, sizeof(char));
	if (newStr == NULL)
		return (newStr);
	ft_memcpy(newStr, s1, l_str);
	return (newStr);
}
