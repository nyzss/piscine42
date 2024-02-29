/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:17:24 by okoca             #+#    #+#             */
/*   Updated: 2024/02/24 14:31:23 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	**fill_result(char **result, char *tmp_buf)
{
	char	**new;
	int	len_buf;
	int	len_result;
	int	i;

	i = 0;
	len_buf = 1;
	if (*result == NULL)
	{
		len_result = 0;
	}
	else
		len_result = ft_strlen(*result);
	*new = (char *)malloc(sizeof(char) * (len_result + len_buf + 1));
	while (*result[i])
	{
		*new[i] = *result[i];
		i++;
	}
	*new[i] = tmp_buf[0];
	*new[i + 1] = '\0';
	free(*result);
	*result = *new;
	return (new);
}

char	*read_to_buffer(char *path)
{
	char	**result;
	char	tmp_buf[1];
	int	dict_fd;
	int	read_size;
	int	buffer_size;

	buffer_size = 0;
	read_size = 1;
	dict_fd = open(path, O_RDONLY);
	while (read_size != 0)
	{
		read_size = read(dict_fd, tmp_buf, 1);
		result = fill_result(result, tmp_buf);
	}
	return(*result);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	char *res = read_to_buffer(argv[1]);

	printf("result: %s\n", res);

	return (0);
}
