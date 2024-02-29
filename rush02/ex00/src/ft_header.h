/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:42:10 by okoca             #+#    #+#             */
/*   Updated: 2024/02/25 08:43:00 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define DICT_SIZE 1024
# define ERROR 1
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

//char			*hundreds;
//char			*tens;
//char			*units;

// le value est a 3 char [0][1][2][hundreds, tens, unites]
typedef struct s_node
{
	char			*value;
	int				group;
	struct s_node	*next;
}	t_node;

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	print_error(char *str);

#endif
