/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:10:31 by juperez           #+#    #+#             */
/*   Updated: 2024/02/18 10:28:36 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_col_up_count_vue(t_board board, int index)
{
	int	count;
	int	y;
	int	checker;

	count = 1;
	y = 0;
	while (y < board.size)
	{
		checker = y + 1;
		while (checker < board.size)
		{
			if (board.result[y][index] < board.result[checker][index])
			{
				count++;
				break ;
			}
			else
				checker++;
		}
		y = checker;
	}
	return (count);
}

int	ft_col_down_count_vue(t_board board, int index)
{
	int	count;
	int	y;
	int	checker;

	count = 1;
	y = board.size - 1;
	while (y >= 0)
	{
		checker = y - 1;
		while (checker >= 0)
		{
			if (board.result[y][index] < board.result[checker][index])
			{
				count++;
				break ;
			}
			else
				checker--;
		}
		y = checker;
	}
	return (count);
}

int	ft_row_left_count_vue(t_board board, int index)
{
	int	count;
	int	x;
	int	checker;

	count = 1;
	x = 0;
	while (x < board.size)
	{
		checker = x + 1;
		while (checker < board.size)
		{
			if (board.result[index][x] < board.result[index][checker])
			{
				count++;
				break ;
			}
			else
				checker++;
		}
		x = checker;
	}
	return (count);
}

int	ft_row_right_count_vue(t_board board, int index)
{
	int	count;
	int	x;
	int	checker;

	count = 1;
	x = board.size - 1;
	while (x >= 0)
	{
		checker = x - 1;
		while (checker >= 0)
		{
			if (board.result[index][x] < board.result[index][checker])
			{
				count++;
				break ;
			}
			else
				checker--;
		}
		x = checker;
	}
	return (count);
}
