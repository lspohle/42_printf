/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_decimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 07:46:31 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 10:30:43 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Decimal -> %d
void	test_decimal(int *value)
{
	int		test = 1;

	test_headline("	Decimal");

	// Test 1
	if	(printf("Original: %d\n", INT_MAX) == ft_printf("Replica : %d\n", INT_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %d\n", INT_MIN) == ft_printf("Replica : %d\n", INT_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %d\n", INT_MAX + 5) == ft_printf("Replica : %d\n", INT_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %d\n", INT_MIN - 5) == ft_printf("Replica : %d\n", INT_MIN - 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %d\n", LONG_MAX) == ft_printf("Replica : %d\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 6
	if	(printf("Original: %d\n", LONG_MIN) == ft_printf("Replica : %d\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 7
	if	(printf("Original: %d and %d\n", 42, 24) == ft_printf("Replica : %d and %d\n", 42, 24))
		test_successful(test);
	else
		test_failed(test, value);

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// Integer -> %i
void	test_integer(int *value)
{
	int		test = 1;

	test_headline("	Integer");

	// Test 1
	if	(printf("Original: %i\n", INT_MAX) == ft_printf("Replica : %i\n", INT_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %i\n", INT_MIN) == ft_printf("Replica : %i\n", INT_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %i\n", INT_MAX + 5) == ft_printf("Replica : %i\n", INT_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %i\n", INT_MIN - 5) == ft_printf("Replica : %i\n", INT_MIN - 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %i\n", LONG_MAX) == ft_printf("Replica : %i\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 6
	if	(printf("Original: %i\n", LONG_MIN) == ft_printf("Replica : %i\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 7
	if	(printf("Original: %i and %i\n", 42, 24) == ft_printf("Replica : %i and %i\n", 42, 24))
		test_successful(test);
	else
		test_failed(test, value);

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// Unsigned decimal -> %u
void	test_unsigned_decimal(int *value)
{
	int		test = 1;

	test_headline("    Unsigned decimal");

	// Test 1
	if	(printf("Original: %u\n", UINT_MAX) == ft_printf("Replica : %u\n", UINT_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %u\n", 0) == ft_printf("Replica : %u\n", 0))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %u\n", UINT_MAX + 5) == ft_printf("Replica : %u\n", UINT_MAX + 5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if	(printf("Original: %u\n", -5) == ft_printf("Replica : %u\n", -5))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if	(printf("Original: %u\n", LONG_MAX) == ft_printf("Replica : %u\n", LONG_MAX))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 6
	if	(printf("Original: %u\n", LONG_MIN) == ft_printf("Replica : %u\n", LONG_MIN))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 7
	if	(printf("Original: %u and %u\n", 42, -24) == ft_printf("Replica : %u and %u\n", 42, -24))
		test_successful(test);
	else
		test_failed(test, value);

	printf("\n");
}
