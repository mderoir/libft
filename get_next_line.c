/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:28:31 by mderoir           #+#    #+#             */
/*   Updated: 2020/02/14 09:45:15 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ret_endof(char **line)
{
	(*line) = ft_calloc(1, 1);
	return (0);
}

int		line_cpy(int const fd, char **line, char **str)
{
	char	*tmp;
	int		len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '\0')
		len++;
	if (str[fd][len] == '\0')
	{
		(*line) = ft_strdup(str[fd]);
		free(str[fd]);
		str[fd] = NULL;
		return (0);
	}
	else if (str[fd][len] == '\n')
	{
		(*line) = ft_substr(str[fd], 0, len);
		tmp = ft_strdup(str[fd] + len + 1);
		free(str[fd]);
		str[fd] = tmp;
	}
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		*tmp;
	char		buffer[BUFFER_SIZE + 1];
	int			octet_read;

	if (fd < 0 || line == NULL || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (-1);
	while ((octet_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[octet_read] = 0;
		if (str[fd] == NULL)
			str[fd] = ft_calloc(1, 1);
		tmp = ft_strjoin(str[fd], buffer);
		if (str[fd])
			free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (octet_read < 0)
		return (-1);
	if (octet_read == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (ret_endof(line));
	return (line_cpy(fd, line, str));
}
