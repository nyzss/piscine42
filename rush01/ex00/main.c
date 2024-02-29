/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:57:31 by okoca             #+#    #+#             */
/*   Updated: 2024/02/18 17:12:11 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	get_param_count(char *param)
{
	int		i;
	int		param_count;
	char	max;

	i = 0;
	param_count = 0;
	max = '1';
	while (param[i] != '\0')
	{
		if (!is_numeric(param[i]) && !is_space(param[i]))
			return (0);
		i++;
	}
	i = 0;
	while (param[i] != '\0')
	{
		if (is_numeric(param[i]) && i % 2 == 0)
		{
			if (param[i] > max)
				max = param[i];
			param_count++;
			i++;
		}
		else if (is_space(param[i]) && i % 2 == 1)
			i++;
		else
			return (0);
	}
	return (param_count);
}

int	check_errors(char *arg)
{
	int	param_count;

	param_count = get_param_count(arg);
	if (param_count == 0 || param_count % 4 != 0 \
			|| param_count / 4 != char_to_int(max))
	{
		return (0);
	}
	return (1);
}

void	parse_params(t_board board, char *arg)
{
	int	board_index;
	int	idx;
	int	tab_index;
	int	*tab;

	idx = 0;
	board_index = 0;
	while (board_index < 4)
	{
		tab_index = 0;
		tab = (int *)malloc(sizeof(int) * board.size);
		while (arg[idx])
		{
			if (is_numeric(arg[idx]) && idx % 2 == 0)
			{
				tab[tab_index] = char_to_int(arg[idx]);
				tab_index++;
				if (tab_index % board.size == 0)
				{
					board.params[board_index] = tab;
					idx++;
					board_index++;
					break ;
				}
			}
			idx++;
		}
	}
}

t_board	initialize_board(char *arg)
{
	t_board	board;

	board.x = 0;
	board.y = 0;
	board.immutable = NULL;
	board.result = NULL;
	board.params = (int **)malloc(sizeof(int *) * 4);
	board.params_count = get_param_count(arg);
	board.size = board.params_count / 4;
	parse_params(board, arg);
	return (board);
}

int	main(int argc, char **argv)
{
	int		result;
	t_board	board;

	if (argc != 2 || check_errors(argv[1]) == 0)
	{
		print_error();
		return (1);
	}
	board = initialize_board(argv[1]);
	result = ft_resolve_skyscraper(board);
	if (result == FALSE)
	{
		print_error();
		return (1);
	}
	free_params(board);
}
