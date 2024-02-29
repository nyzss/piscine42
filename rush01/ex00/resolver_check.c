/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 07:41:24 by juperez           #+#    #+#             */
/*   Updated: 2024/02/18 10:28:08 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_col_up_is_valid(t_board board)
{
	int	index;
	int	count;

	index = 0;
	while (index < board.size)
	{
		count = ft_col_up_count_vue(board, index);
		if (count != board.params[COL_UP][index])
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int	ft_col_down_is_valid(t_board board)
{
	int	index;
	int	count;

	index = 0;
	while (index < board.size)
	{
		count = ft_col_down_count_vue(board, index);
		if (count != board.params[COL_DOWN][index])
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int	ft_row_left_is_valid(t_board board)
{
	int	index;
	int	count;

	index = 0;
	while (index < board.size)
	{
		count = ft_row_left_count_vue(board, index);
		if (count != board.params[ROW_LEFT][index])
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int	ft_row_right_is_valid(t_board board)
{
	int	index;
	int	count;

	index = 0;
	while (index < board.size)
	{
		count = ft_row_right_count_vue(board, index);
		if (count != board.params[ROW_RIGHT][index])
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int	ft_result_is_valid(t_board board)
{
	int	x;
	int	y;

	y = 0;
	while (y < board.size)
	{
		x = 0;
		while (x < board.size)
		{
			if (!board.result[y][x])
				return (FALSE);
			x++;
		}
		y++;
	}
	if (ft_col_up_is_valid(board)
		&& ft_col_down_is_valid(board)
		&& ft_row_left_is_valid(board)
		&& ft_row_right_is_valid(board))
		return (TRUE);
	else
		return (FALSE);
}
