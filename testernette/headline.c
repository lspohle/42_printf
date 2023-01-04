/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:39:46 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/04 12:38:22 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

// Displaying headline
void	test_headline(char *function_name)
{
	printf(PURPLE"-------------------------\n"ESCAPE);
	printf(CYAN"	%s\n"ESCAPE, function_name);
	printf(PURPLE"-------------------------\n"ESCAPE);
}
