/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:34:17 by okoca             #+#    #+#             */
/*   Updated: 2024/02/22 11:21:00 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	t_stock_str	tmp;
	char		*cpy;
	int			i;
	int			tmp_size;

	i = 0;
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	while (i < ac)
	{
		tmp_size = ft_strlen(av[i]);
		cpy = (char *)malloc(sizeof(char) * (tmp_size + 1));
		tmp.size = tmp_size;
		tmp.str = av[i];
		cpy = ft_strcpy(cpy, av[i]);
		tmp.copy = cpy;
		result[i] = tmp;
		i++;
	}
	tmp.size = 1;
	tmp.str = "\0";
	tmp.copy = "\0";
	result[i] = tmp;
	return (result);
}

/*
int main(int argc, char **argv)
{
	int	i;

	i = 0;
	argv++;
	argc--;
	t_stock_str	*hello;
	hello = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{

		printf("%s\n", hello[i].str);
		i++;
	}
}
*/
