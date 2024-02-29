/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:14:40 by okoca             #+#    #+#             */
/*   Updated: 2024/02/29 08:20:16 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *));

int	check_if_t(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'i')
			return (1);
		i++;
	}
	return (0);
}


#include <stdlib.h>
int main(int argc, char **argv)
{
	int i = 0;
	argv++;
	argc--;
	char **name = (char **)malloc(sizeof(char *) * (argc + 1));
	while (i < argc)
	{
		name[i] = argv[i];
		i++;
	}
	name[argc] = NULL;

	printf("%d\n", ft_any(name, &check_if_t));
}
*/
