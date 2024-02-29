/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:42:10 by okoca             #+#    #+#             */
/*   Updated: 2024/02/24 11:20:10 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define DICT_SIZE 1024
# define ERROR 1
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_node
{
	char	*hundreds;
	char	*tens;
	char	*units;
	int	group;
	struct s_node	*next;
}	t_node;

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	print_error(void);

#endif
