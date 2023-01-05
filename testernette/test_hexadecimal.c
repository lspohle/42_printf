/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hexadecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:12:08 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 10:30:29 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Pointer -> %p
void	test_pointer(int *value)
{
	int		test = 1;

	test_headline("	Pointer");

	// Test 1
	if	(printf("Original: %p\n", &"Hello World") == ft_printf("Replica : %p\n", &"Hello World"))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %p, %p, %p\n", &"") == ft_printf("Replica : %p, %p, %p\n", &""))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %p\n", NULL) == ft_printf("Replica : %p\n", NULL))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %p\n", LONG_MAX) == ft_printf("Replica : %p\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %p\n", LONG_MIN) == ft_printf("Replica : %p\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// Hexadecimal (lowercase) -> %x
void	test_hexadecimal_lower(int *value)
{
	int		test = 1;

	test_headline(" Hexadecimal (lowercase)");

	// Test 1
	if	(printf("Original: %x\n", INT_MAX) == ft_printf("Replica : %x\n", INT_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %x\n", INT_MIN) == ft_printf("Replica : %x\n", INT_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %x\n", INT_MAX + 5) == ft_printf("Replica : %x\n", INT_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %x\n", INT_MIN - 5) == ft_printf("Replica : %x\n", INT_MIN - 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %x\n", LONG_MAX) == ft_printf("Replica : %x\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 6
	if	(printf("Original: %x\n", LONG_MAX + 5) == ft_printf("Replica : %x\n", LONG_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 7
	if	(printf("Original: %x\n", LONG_MIN) == ft_printf("Replica : %x\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 8
	if	(printf("Original: %x and %x\n", 42, 24) == ft_printf("Replica : %x and %x\n", 42, 24))
		test_successful(test);
	else
		test_failed(test, value);

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// Hexadecimal (uppercase) -> %X
void	test_hexadecimal_upper(int *value)
{
	int		test = 1;

	test_headline(" Hexadecimal (uppercase)");

	// Test 1
	if	(printf("Original: %X\n", INT_MAX) == ft_printf("Replica : %X\n", INT_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %X\n", INT_MIN) == ft_printf("Replica : %X\n", INT_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %X\n", INT_MAX + 5) == ft_printf("Replica : %X\n", INT_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %X\n", INT_MIN - 5) == ft_printf("Replica : %X\n", INT_MIN - 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %X\n", LONG_MAX) == ft_printf("Replica : %X\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 6
	if	(printf("Original: %X\n", LONG_MAX + 5) == ft_printf("Replica : %X\n", LONG_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 7
	if	(printf("Original: %X\n", LONG_MIN) == ft_printf("Replica : %X\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 8
	if	(printf("Original: %X and %X\n", 42, 24) == ft_printf("Replica : %X and %X\n", 42, 24))
		test_successful(test);
	else
		test_failed(test, value);

	printf("\n");
}

