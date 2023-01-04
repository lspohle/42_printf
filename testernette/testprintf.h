/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:30:47 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 17:04:54 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTPRINTF_H
# define TESTPRINTF_H
# include "../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle/ft_printf.h"
# include <limits.h>
# include <stdio.h>
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[1;36m"
# define ESCAPE "\033[0m"

void	test_headline(char *function_name);
void	test_successful(int test);
void	test_failed(int test);
void	test_character(void);
void	test_string(void);
void	test_pointer(void);
void	test_integer(void);

#endif


