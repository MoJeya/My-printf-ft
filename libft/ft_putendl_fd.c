/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:03:48 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/13 18:59:06 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	cnt;

	if (!s)
		return ((void) NULL);
	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;
	write(fd, s, cnt);
	write(fd, "\n", 1);
}
