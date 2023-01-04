/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:42:17 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 11:57:01 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

void	test_character(void)
{
	int		test = 1;

	test_headline("Character");

	// Test 1
	if (printf("Original: %c and %c\n", 'a', 'z') == ft_printf("Replica : %c and %c\n", 'a', 'z'))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 2
	if (printf("Original: %c\n", 'z') == ft_printf("Replica : %c\n", 'z'))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 3
	if (printf("Original: %c\n", '0') == ft_printf("Replica : %c\n", '0'))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 4
	if (printf("Original: %c\n", '\t') == ft_printf("Replica : %c\n", '\t'))
		test_successful(test);
	else
		test_failed(test);
	test++;

	// Test 5
	if (printf("Original: %c\n", '%') == ft_printf("Replica : %c\n", '%'))
		test_successful(test);
	else
		test_failed(test);
	test++;

	printf("\n");
}
