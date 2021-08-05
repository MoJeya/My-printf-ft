/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:27:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/20 19:23:14 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s;
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while ((start < end) && (s1[start] != '\0'))
	{
		if (ft_strchr(set, s1[start]))
			start++;
		else
			break ;
	}
	while ((end > 0) && (s1[end - 1] != '\0'))
	{
		if (ft_strchr(set, s1[end - 1]))
			end--;
		else
			break ;
	}
	s = ft_substr(s1, start, (end - start));
	return (s);
}
