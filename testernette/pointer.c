/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:43:35 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 17:17:04 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

void	test_pointer(void)
{
	int		test = 1;

	test_headline("Pointer");

	// Test 1
	if	(printf("Original: %p\n", &"Hello World") == ft_printf("Replica : %p\n", &"Hello World"))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 2
	if	(printf("Original: %p\n", &"") == ft_printf("Replica : %p\n", &""))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 3
	if	(printf("Original: %p\n", NULL) == ft_printf("Replica : %p\n", NULL))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 4
	if	(printf("Original: %p\n", LONG_MAX) == ft_printf("Replica : %p\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 5
	if	(printf("Original: %p\n", LONG_MIN) == ft_printf("Replica : %p\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test);
	test++;

	printf("\n");
}
