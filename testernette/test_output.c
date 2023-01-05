/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_output.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 07:44:35 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 10:49:53 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Displaying headline
void	test_headline(char *function_name)
{
	printf(PURPLE"-------------------------\n"ESCAPE);
	printf(CYAN"%s\n"ESCAPE, function_name);
	printf(PURPLE"-------------------------\n"ESCAPE);
}

// Displaying success
void	test_successful(int test)
{
	printf(GREEN"Test %d: OK\n"ESCAPE, test);
}

// Displaying failure
void	test_failed(int test, int *value)
{
	printf(RED"Test %d: KO\n"ESCAPE, test);
	*value = 1;
}

// Displaying congrats
void	test_congratulations(void)
{
	printf(PURPLE"\n-------------------------\n"ESCAPE);
	printf(BGREEN"  🥳 Congratulations! 🥳\n"ESCAPE);
	printf(PURPLE"-------------------------\n\n\n"ESCAPE);
}

// Displaying error
void	test_error(void)
{
	printf(PURPLE"\n-------------------------\n"ESCAPE);
	printf(BRED"      🥴 Error! 🥴\n"ESCAPE);
	printf(PURPLE"-------------------------\n\n\n"ESCAPE);
}
