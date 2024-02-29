/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:29:48 by okoca             #+#    #+#             */
/*   Updated: 2024/02/25 08:43:49 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	count_lines(char *str)
{
	int	i;
	int	line_count;

	i = 0;
	line_count = 0;
	while (str[i])
	{
		if(str[i] == '\n')
			line_count++;
		i++;
	}
	return (line_count);
}

char	**result(char *str)
{
	char	**result;
	int	i;
	int	j;
	int	line_count;

	line_count = count_lines(str);
	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (line_count + 1));
	while (str[i])
	{
		if (str[i] == '\n')
		{

		}
		i++;
	}
	return (result);
}
