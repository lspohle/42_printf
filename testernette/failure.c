/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   failure.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:40:14 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 12:24:40 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

// Displaying failure
void	test_failed(int test)
{
	printf(RED"Test %d: KO\n"ESCAPE, test);
}
