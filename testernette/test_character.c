/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_character.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:42:17 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 10:48:08 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Character -> %c
void	test_character(int *value)
{
	int		test = 1;

	test_headline("	Character");

	// Test 1
	if (printf("Original: %c and %c\n", 'a', 'z') == ft_printf("Replica : %c and %c\n", 'a', 'z'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if (printf("Original: %c%c%c%c%c\n", '1', '2', '3', '4', '5') == ft_printf("Replica : %c%c%c%c%c\n", '1', '2', '3', '4', '5'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if (printf("Original: %c\n", '0') == ft_printf("Replica : %c\n", '0'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if (printf("Original: %c\n", '\t') == ft_printf("Replica : %c\n", '\t'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if (printf("Original: %c\n", '%') == ft_printf("Replica : %c\n", '%'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// Percent
void	test_percent(int *value)
{
	int		test = 1;

	test_headline("	Percent");

	// Test 1
	if (printf("Original: %% and %%\n", 'a', 'z') == ft_printf("Replica : %% and %%\n", 'a', 'z'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if (printf("Original: %%%%%%%%%%\n", '1', '2', '3', '4', '5') == ft_printf("Replica : %%%%%%%%%%\n", '1', '2', '3', '4', '5'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if (printf("Original: %%\n", '0') == ft_printf("Replica : %%\n", '0'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if (printf("Original: %%\n", '%') == ft_printf("Replica : %%\n", '%'))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	printf("\n");
}

// ----------------------------------------------------------------------------------------------- //

// String -> %s
void	test_string(int *value)
{
	int		test = 1;

	test_headline("	String");

	// Test 1
	if	(printf("Original: %s\n", "Hello World") == ft_printf("Replica : %s\n", "Hello World"))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 2
	if	(printf("Original: %s\n", "") == ft_printf("Replica : %s\n", ""))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 3
	if	(printf("Original: %s\n", NULL) == ft_printf("Replica : %s\n", NULL))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 4
	if (printf("Original: %s\n", "-123456789") == ft_printf("Replica : %s\n", "-123456789"))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	// Test 5
	if (printf("Original: %s\n", "\t42 Wolfsburg\0Hello World") == ft_printf("Replica : %s\n", "\t42 Wolfsburg\0Hello World"))
		test_successful(test);
	else
		test_failed(test, value);
	test++;

	printf("\n");
}
