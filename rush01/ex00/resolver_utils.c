/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 07:46:35 by juperez           #+#    #+#             */
/*   Updated: 2024/02/18 15:35:07 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h" 

int	ft_create_board(int ***board, int size)
{
	int	index;

	*board = (int **)malloc(sizeof(int *) * size);
	index = 0;
	if (!(*board))
		return (FALSE);
	else
	{
		while (index < size)
		{
			(*board)[index] = (int *)malloc(sizeof(int) * size);
			if (!((*board)[index]))
				return (FALSE);
			index++;
		}
	}
	return (TRUE);
}

void	ft_free_board(int ***board, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free((*board)[index]);
		index++;
	}
	free(*board);
}

void	ft_init_board(int ***board, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			(*board)[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	ft_print_board(t_board board, int *success)
{
	int		x;
	int		y;
	char	digit;

	y = 0;
	while (y < board.size)
	{
		x = 0;
		while (x < board.size)
		{
			digit = board.result[y][x] + '0';
			write(1, &digit, 1);
			if (x < (board.size - 1))
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	*success = TRUE;
}
