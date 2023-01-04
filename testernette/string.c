/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:27:50 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 10:32:36 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

void	test_string(void)
{
	int		test = 1;

	test_headline("String");

	// Test 1
	if	(printf("Original: %s\n", "Hello World") == ft_printf("Replica : %s\n", "Hello World"))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 2
	if	(printf("Original: %s\n", "") == ft_printf("Replica : %s\n", ""))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 3
	if	(printf("Original: %s\n", NULL) == ft_printf("Replica : %s\n", NULL))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 4
	if (printf("Original: %s\n", "-123456789") == ft_printf("Replica : %s\n", "-123456789"))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 5
	if (printf("Original: %s\n", "\t42 Wolfsburg\0Hello World") == ft_printf("Replica : %s\n", "\t42 Wolfsburg\0Hello World"))
		test_successful(test);
	else
		test_failed(test);
	test++;

	printf("\n");
}
