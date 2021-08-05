/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:44:15 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/20 19:24:33 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		cnt;
	char	c;

	if (!s)
		return ((void) NULL);
	cnt = 0;
	while (s[cnt] != '\0')
	{
		c = s[cnt];
		write(fd, &c, 1);
		cnt++;
	}
}
