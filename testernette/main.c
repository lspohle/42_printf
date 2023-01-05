/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:39:28 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 20:56:25 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	int value = 0;

	testernette();

	test_character(&value);
	test_string(&value);
	test_pointer(&value);
	test_integer(&value);
	test_decimal(&value);
	test_unsigned_decimal(&value);
	test_hexadecimal_lower(&value);
	test_hexadecimal_upper(&value);
	test_percent(&value);

	if (value == 0)
		test_congratulations();
	else
		test_error();
}

// 	//Test 6 -> unsigned decimal (base 10)
// 	test_headline("Unsined decimal");
// 	if	(printf("Original: %u\n", UINT_MAX) == ft_printf("Replica : %u\n", UINT_MAX))
// 		test_successful(test);
// 	else
// 		test_failed(test);
// 	test++;
