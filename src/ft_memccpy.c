/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:05:04 by mderoir           #+#    #+#             */
/*   Updated: 2020/10/23 19:11:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char *str;

	i = 0;
	str = (char *)dst;
	while (i < n)
	{
		(str[i] = ((unsigned char *)src)[i]);
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (&str[++i]);
		i++;
	}
	return (NULL);
}
