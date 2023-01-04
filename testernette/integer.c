/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:03:40 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 12:52:29 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

void	test_integer(void)
{
	int		test = 1;

	test_headline("Integer");

	// Test 1
	if	(printf("Original: %i\n", INT_MAX) == ft_printf("Replica : %i\n", INT_MAX))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 2
	if	(printf("Original: %i\n", INT_MIN) == ft_printf("Replica : %i\n", INT_MIN))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 3
	if	(printf("Original: %i\n", INT_MAX + 5) == ft_printf("Replica : %i\n", INT_MAX + 5))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 4
	if	(printf("Original: %i\n", INT_MIN - 5) == ft_printf("Replica : %i\n", INT_MIN - 5))
		test_successful(test);
	else
		test_failed(test);

	printf("\n");
}
