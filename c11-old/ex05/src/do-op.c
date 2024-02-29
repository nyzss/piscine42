/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:58:32 by okoca             #+#    #+#             */
/*   Updated: 2024/02/27 14:47:33 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

#include <stdio.h>

int	check_operator(int second, char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 1)
		return (0);
	else if (!(str[0] == '+' || str[0] == '-' || str[0] == '*' \
				|| str[0] == '/' || str[0] == '%'))
		return (0);
	else if (str[0] == '%' && second == 0)
		return (-1);
	else if (str[0] == '/' && second == 0)
		return (-2);
	return (1);
}

int	do_operation(int first, int second, char given_op, int (*op[])(int, int))
{
	int		i;
	char	*operator;

	i = 0;
	operator = "+-*/%";
	while (operator[i])
	{
		if (operator[i] == given_op)
			return (op[i](first, second));
		i++;
	}
	return (0);
}

void	print_number(int nb)
{
	ft_putnbr(nb);
	ft_putchar('\n');
}

int	handle_error(int error)
{
	if (error == 0)
	{
		print_number(0);
		return (0);
	}
	else if (error == -1)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else if (error == -2)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	result;
	int	(*op[5])(int, int);
	int	first;
	int	second;

	argc--;
	argv++;
	if (argc != 3)
		return (0);
	op[0] = sum;
	op[1] = sub;
	op[2] = multiply;
	op[3] = division;
	op[4] = modulo;
	first = ft_atoi(argv[0]);
	second = ft_atoi(argv[2]);
	if (handle_error(check_operator(second, argv[1])) < 1)
		return (0);
	result = do_operation(first, second, argv[1][0], op);
	print_number(result);
}

// map valid operator array to function array
