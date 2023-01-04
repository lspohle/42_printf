/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   success.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:40:19 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 12:25:58 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

// Displaying success
void	test_successful(int test)
{
	printf(GREEN"Test %d: OK\n"ESCAPE, test);
}
