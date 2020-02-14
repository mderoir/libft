/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:08:48 by mderoir           #+#    #+#             */
/*   Updated: 2020/02/14 11:14:51 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_power(int nb, int exponent)
{
    if (exponent == 0)
        return (1);
    if (exponent > 0)
        ft_power(nb = nb * nb, exponent--);
    return (nb);   
}
