/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:39:28 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 12:43:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle/ft_printf.h"
// #include <stdio.h>
// #include <limits.h>

#include "testprintf.h"

int main(void)
{
	test_character();
	test_string();
	test_pointer();
	test_integer();
	// test_character();
	// test_character();

}


// 	char	*s = "Hello World";

// 	// Test 3 -> pointer (base 16)
// 	test_headline("Pointer");
// 	if	(printf("Original: %p\n", &s) == ft_printf("Replica : %p\n", &s))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	// Test 4 -> decimal (base 10)
// 	test_headline("Decimal");
// 	if	(printf("Original: %d\n", INT_MAX) == ft_printf("Replica : %d\n", INT_MAX))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	// Test 5 -> integer (base 10)
// 	test_headline("Integer");
// 	if	(printf("Original: %i\n", INT_MIN) == ft_printf("Replica : %i\n", INT_MIN))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	//Test 6 -> unsigned decimal (base 10)
// 	test_headline("Unsined decimal");
// 	if	(printf("Original: %u\n", UINT_MAX) == ft_printf("Replica : %u\n", UINT_MAX))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	// Test 7 -> hexadecimal (lowercase) (base 16)
// 	test_headline("Hexadecimal (lowercase)");
// 	if	(printf("Original: %x\n", INT_MAX) == ft_printf("Replica : %x\n", INT_MAX))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	// Test 8 -> hexadecimal (uppercase) (base 16)
// 	test_headline("Hexadecimal (uppercase)");
// 	if	(printf("Original: %X\n", INT_MAX) == ft_printf("Replica : %X\n", INT_MAX))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;

// 	// Test 9 -> percent sign
// 	test_headline("Percent sign");
// 	if (printf("Original: %%\n") == ft_printf("Replica : %%\n"))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	printf("\n");
// }
