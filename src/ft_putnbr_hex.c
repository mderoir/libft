/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:50:42 by mderoir           #+#    #+#             */
/*   Updated: 2020/02/14 11:05:53 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_hex(int nb, char c)
{
	unsigned int nombre;
	const char base_up[] = "0123456789ABCDEF";
	const char base_low[] = "0123456789abcdef";
	const int nbase = 16;

	if (nb < 0)
	{
		nombre = -nb;
		ft_putchar('-');
	}
	else
		nombre = nb;
	if (nombre >= nbase)
		ft_putnbr_hex(nombre / nbase, c);
    ft_isupper(c) ? ft_putchar(base_up[nombre % nbase]) : ft_putchar(base_low[nombre % nbase]);
}