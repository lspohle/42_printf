/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:30:47 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 21:08:28 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include "../printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# define RED "\e[38;5;160m"
# define GREEN "\e[38;5;41m"
# define BRED "\e[38;5;160;1m"
# define BGREEN "\e[38;5;41;1m"
# define PURPLE "\e[38;5;141;1m"
# define MINT "\e[38;5;43m"
# define PINK "\e[38;5;212m"
# define CYAN "\033[1;36m"
# define ESCAPE "\033[0m"

void	test_headline(char *function_name);
void	testernette(void);
void	test_successful(int test);
void	test_failed(int test, int *value);
void	test_congratulations(void);
void	test_error(void);
void	test_character(int *value);
void	test_string(int *value);
void	test_pointer(int *value);
void	test_integer(int *value);
void	test_decimal(int *value);
void	test_unsigned_decimal(int *value);
void	test_hexadecimal_lower(int *value);
void	test_hexadecimal_upper(int *value);
void	test_percent(int *value);

#endif
