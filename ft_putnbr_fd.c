/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:46:54 by mderoir           #+#    #+#             */
/*   Updated: 2019/11/06 17:11:07 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nombre;

	if (n < 0)
	{
		nombre = -n;
		ft_putchar_fd('-', fd);
	}
	else
		nombre = n;
	if (nombre >= 10)
		ft_putnbr_fd(nombre / 10, fd);
	ft_putchar_fd(nombre % 10 + 48, fd);
}
