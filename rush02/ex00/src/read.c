/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:41:54 by okoca             #+#    #+#             */
/*   Updated: 2024/02/25 16:25:16 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*read_to_buffer(char *path)
{
	int		fd;
	int		size;
	char	buffer[1024];
	int		ret;
	char	*buffer2;

	fd = open(path, O_RDONLY);
	ret = read(fd, buffer, 1);
	size = ret;
	if (ret == -1 || fd == -1)
		return (NULL);
	while (ret > 0)
	{
		ret = read(fd, buffer, 1024);
		size += ret;
	}
	close(fd);
	// printf("size: %d, ret: %d\n", size, ret);
	fd = open(path, O_RDONLY);
	buffer2 = (char *)malloc(sizeof(char) * (size + 1));
	read(fd, buffer2, size);
	close(fd);
	return(buffer2);
}

/*
 * old
 * too much malloc calls, pareil pour open et close
#include "ft_header.h"
#include <stdio.h>

char	*read_to_buffer(char *path, int *size)
{
	char	*buffer;
	int	dict_fd;
	int	read_size;
	int	dict_size;

	// to go into the while
	dict_size = DICT_SIZE;
	read_size = dict_size;
	while (read_size == dict_size)
	{
		dict_fd = open(path, O_RDONLY);
		printf("read_size: %d - dict_size: %d\n", read_size, dict_size);
		buffer = (char *)malloc(sizeof(char) * (dict_size + 1));
		read_size = read(dict_fd, buffer, dict_size);
		dict_size *= 2;
		read_size *= 2;
		close(dict_fd);
		free(buffer);
	}
	read_size /= 2;
	dict_fd = open(path, O_RDONLY);
	*size = read_size;
	buffer = (char *)malloc(sizeof(char) * (read_size + 1));
	read(dict_fd, buffer, read_size);
	close(dict_fd);
	return(buffer);
}

int main(int argc, char **argv)
{
	(void)argc;
	int size;
	char *buffer = read_to_buffer(argv[1], &size);
	printf("%s\nsize: %d\n", buffer, size);
	free(buffer);
}
*/
