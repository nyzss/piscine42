/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:54:55 by okoca             #+#    #+#             */
/*   Updated: 2024/02/18 17:04:06 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H 
#include <unistd.h>
#include <stdlib.h>

# define TRUE 1
# define FALSE 0
# define COL_UP 0
# define COL_DOWN 1
# define ROW_LEFT 2
# define ROW_RIGHT 3

struct	s_board
{
	int	**result;
	int	**immutable;
	int	**params;
	int	params_count;
	int	size;
	int	x;
	int	y;
};

typedef struct s_board	t_board;

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	free_params(t_board board);

int		char_to_int(char c);

int		is_space(char c);

int		is_numeric(char c);

void	print_error();

void	ft_place_immutable(t_board *board);

int		ft_result_is_valid(t_board board);

int		ft_col_up_count_vue(t_board board, int index);

int		ft_col_down_count_vue(t_board board, int index);

int		ft_row_left_count_vue(t_board board, int index);

int		ft_row_right_count_vue(t_board board, int index);

int		ft_create_board(int ***board, int size);

void	ft_free_board(int ***board, int size);

void	ft_init_board(int ***board, int size);

void	ft_print_board(t_board board, int *success);

int		ft_resolve_skyscraper(t_board board);
#endif
