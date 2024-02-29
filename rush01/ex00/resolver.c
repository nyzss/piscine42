/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 07:40:47 by juperez           #+#    #+#             */
/*   Updated: 2024/02/18 16:54:24 by juperez          ###   ########.fr       */
/*   Updated: 2024/02/18 14:15:19 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_num_is_valid(t_board board, int num)
{
	int	index;

	index = 0;
	while (index < board.size)
	{
		if (board.result[board.y][index] == num
			|| board.result[index][board.x] == num)
			return (FALSE);
		index++;
	}
	return (TRUE);
}

t_board	ft_move_to_next(t_board board)
{
	if (board.x + 1 < board.size)
		board.x = board.x + 1;
	else if (board.y + 1 < board.size)
	{
		board.x = 0;
		board.y = board.y + 1;
	}
	return (board);
}

void	ft_backtrack_skyscraper(t_board board, int *success)
{
	int	num;

	if (*success == TRUE)
		return ;
	if ((board.x == board.size - 1) && (board.y == board.size - 1)
		&& (ft_result_is_valid(board)) && *success == FALSE)
		ft_print_board(board, success);
	if (!(board.immutable[board.y][board.x]))
	{
		num = 0;
		while (++num <= board.size)
		{
			if (ft_num_is_valid(board, num))
			{
				board.result[board.y][board.x] = num;
				ft_backtrack_skyscraper(ft_move_to_next(board), success);
			}
		}
		board.result[board.y][board.x] = 0;
	}
	else
		ft_backtrack_skyscraper(ft_move_to_next(board), success);
}

int	ft_resolve_skyscraper(t_board board)
{
	int	success;

	success = FALSE;
	if (!ft_create_board(&(board.result), board.size))
		return (success);
	if (!ft_create_board(&(board.immutable), board.size))
		return (success);
	else
	{
		ft_init_board(&(board.result), board.size);
		ft_init_board(&(board.immutable), board.size);
		ft_place_immutable(&board);
		ft_backtrack_skyscraper(board, &success);
		ft_free_board(&(board.result), board.size);
		ft_free_board(&(board.immutable), board.size);
	}
	return (success);
}
