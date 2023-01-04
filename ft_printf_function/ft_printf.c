/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:45:49 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 13:14:09 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		cnt;

	va_start(args, str);
	i = -1;
	cnt = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			f_int(str[++i], args, &cnt);
		else
		{
			ft_putchar_fd(str[i], 1);
			cnt++;
		}
	}
	va_end(args);
	return (cnt);
}
