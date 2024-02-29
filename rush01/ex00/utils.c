/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:28:04 by okoca             #+#    #+#             */
/*   Updated: 2024/02/18 17:07:55 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '1' && c <= '9')
		return (1);
	return (0);
}

void	print_error(void)
{
	char	error[];

	error = "Error\n";
	write(2, error, 6);
}

int	char_to_int(char c)
{
	return (c - '0');
}

void	free_params(t_board board)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(board.params[i]);
		i++;
	}
}
