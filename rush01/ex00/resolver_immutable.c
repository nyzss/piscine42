/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   immutable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 07:41:06 by juperez           #+#    #+#             */
/*   Updated: 2024/02/18 08:32:46 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_place_immutable_col_up(t_board *board)
{
	int	index;
	int	y;

	index = 0;
	while (index < (*board).size)
	{
		if ((*board).params[COL_UP][index] == (*board).size)
		{
			y = 0;
			while (y < (*board).size)
			{
				(*board).result[y][index] = y + 1;
				(*board).immutable[y][index] = 1;
				y++;
			}
		}
		else if ((*board).params[COL_UP][index] == 1)
		{
			(*board).result[0][index] = (*board).size;
			(*board).immutable[0][index] = 1;
		}
		index++;
	}
}

void	ft_place_immutable_col_down(t_board *board)
{
	int	index;
	int	y;

	index = 0;
	while (index < (*board).size)
	{
		if ((*board).params[COL_DOWN][index] == (*board).size)
		{
			y = (*board).size - 1;
			while (y >= 0)
			{
				(*board).result[y][index] = (*board).size - y;
				(*board).immutable[y][index] = 1;
				y--;
			}
		}
		else if ((*board).params[COL_DOWN][index] == 1)
		{
			(*board).result[(*board).size - 1][index] = (*board).size;
			(*board).immutable[(*board).size - 1][index] = 1;
		}
		index++;
	}
}

void	ft_place_immutable_row_left(t_board *board)
{
	int	index;
	int	x;

	index = 0;
	while (index < (*board).size)
	{
		if ((*board).params[ROW_LEFT][index] == (*board).size)
		{
			x = 0;
			while (x < (*board).size)
			{
				(*board).result[index][x] = x + 1;
				(*board).immutable[index][x] = 1;
				x++;
			}
		}
		else if ((*board).params[ROW_LEFT][index] == 1)
		{
			(*board).result[index][0] = (*board).size;
			(*board).immutable[index][0] = 1;
		}
		index++;
	}
}

void	ft_place_immutable_row_right(t_board *board)
{
	int	index;
	int	x;

	index = 0;
	while (index < (*board).size)
	{
		if ((*board).params[ROW_RIGHT][index] == (*board).size)
		{
			x = (*board).size - 1;
			while (x >= 0)
			{
				(*board).result[index][x] = (*board).size - x;
				(*board).immutable[index][x] = 1;
				x--;
			}
		}
		else if ((*board).params[ROW_RIGHT][index] == 1)
		{
			(*board).result[index][(*board).size - 1] = (*board).size;
			(*board).immutable[index][(*board).size - 1] = 1;
		}
		index++;
	}
}

void	ft_place_immutable(t_board *board)
{
	ft_place_immutable_col_up(board);
	ft_place_immutable_col_down(board);
	ft_place_immutable_row_left(board);
	ft_place_immutable_row_right(board);
}
