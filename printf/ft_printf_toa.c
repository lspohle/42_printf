/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_toa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:22:46 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 13:13:17 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f_itoa(long int num, char *base, int len, int *cnt)
{
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', 1);
		*cnt += 1;
	}
	if (num >= len)
		f_itoa(num / len, base, len, cnt);
	*cnt += 1;
	ft_putchar_fd(base[num % len], 1);
}

void	f_utoa(long unsigned int num, char *base, unsigned int len, int *cnt)
{
	if (num >= len)
		f_utoa(num / len, base, len, cnt);
	*cnt += 1;
	ft_putchar_fd(base[num % len], 1);
}
