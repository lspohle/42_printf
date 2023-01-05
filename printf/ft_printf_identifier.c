/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_identifier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:34:19 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 13:03:16 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f_char(char c, va_list args, int *cnt)
{
	char	*tmp;

	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		*cnt += 1;
	}
	else if (c == 's')
	{
		tmp = va_arg(args, char *);
		if (!tmp)
		{
			ft_putstr_fd("(null)", 1);
			*cnt += 6;
			return ;
		}
		ft_putstr_fd(tmp, 1);
		*cnt += ft_strlen(tmp);
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		*cnt += 1;
	}
}

void	f_int(char c, va_list args, int *cnt)
{
	char	*dec;
	char	*hexl;
	char	*hexu;

	dec = "0123456789";
	hexl = "0123456789abcdef";
	hexu = "0123456789ABCDEF";
	if (c == 'p')
	{
		write(1, "0x", 2);
		f_utoa((long unsigned int)va_arg(args, void *), hexl, 16, cnt);
		*cnt += 2;
	}
	else if (c == 'd' || c == 'i')
		f_itoa(va_arg(args, int), dec, 10, cnt);
	else if (c == 'u')
		f_utoa(va_arg(args, unsigned int), dec, 10, cnt);
	else if (c == 'x')
		f_utoa(va_arg(args, unsigned int), hexl, 16, cnt);
	else if (c == 'X')
		f_utoa(va_arg(args, unsigned int), hexu, 16, cnt);
	else
		f_char(c, args, cnt);
}
