/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:01:08 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/08/19 11:58:14 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>
# include "libft/libft.h"

int		ft_print_u(void *nbr);
int		ft_print_bigX(int adr);
int		ft_print_x(int adr);
int		ft_print_p(void *adr);
int		ft_print_c(int c);
int		ft_print_s(char const *str);
int		ft_print_d(int n);
void	setTyp(char c, va_list arg, int *p);
int		ft_printf(const char *format, ...);

#endif
