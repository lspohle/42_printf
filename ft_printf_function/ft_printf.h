/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:49:47 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 16:57:12 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	f_char(char c, va_list args, int *cnt);
void	f_int(char c, va_list args, int *cnt);
void	f_itoa(long int num, char *base, int len, int *cnt);
void	f_utoa(long unsigned int num, char *base, unsigned int len, int *cnt);

#endif
