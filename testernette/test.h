/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:30:47 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 10:28:44 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include "../printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[1;36m"
# define ESCAPE "\033[0m"

void	test_headline(char *function_name);
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
