/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:33:41 by okoca             #+#    #+#             */
/*   Updated: 2024/02/24 11:57:11 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int main(int argc, char **argv)
{
	char	*buffer;
	int		dict_fd;
	unsigned int	buf_size;
	char	*value;
	char	*dict_path;

	if (argc == 3)
	{
		dict_path = argv[1];
		value = argv[2];
	}
	else if (argc == 2)
	{
		dict_path = "dict/numbers.dict";
		value = argv[1];
	}
	else
	{
		print_error("Error\n");
		return (ERROR);
	}
	buffer = (char *)malloc(sizeof(char) * DICT_SIZE);
	if (!buffer)
			return (ERROR);
	dict_fd = open(dict_path, O_RDONLY);
	buf_size = read(dict_fd, buffer, DICT_SIZE);

	ft_putstr(buffer);
}
