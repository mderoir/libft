/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:51:59 by mderoir           #+#    #+#             */
/*   Updated: 2020/02/14 11:17:26 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putadd(intptr_t ptr)
{
	const char base[] = "0123456789abcdef";
	const int nbase = 16;
	if (ptr < nbase)
		ft_putstr("0x");
	if (ptr >= nbase)
		ft_putadd(ptr / nbase);
    ft_putchar(base[ptr % nbase]);
}
