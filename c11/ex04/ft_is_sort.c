/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:55:02 by okoca             #+#    #+#             */
/*   Updated: 2024/02/28 07:33:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	check_if_t(int first, int second)
{
	if (second > first)
		return (1);
	else if (first == second)
		return (0);
	return (-1);
}
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) < 0)
				asc = 0;
			else if (f(tab[i], tab[j]) > 0)
				desc = 0;
			j++;
		}
		i++;
	}
	if (asc || desc)
		return (1);
	return (0);
}

/*
#include <stdlib.h>

#include <stdio.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	argv++;
	int *tab = (int *)malloc(sizeof(int) * argc);
	while (i < argc)
	{
		tab[i] = atoi(argv[i]);
		printf("%d\n", tab[i]);
		i++;
	}
	//int tab2[10] = {1243, 11, 3425, 33, 654, 984, 1, 4, 3, 99};
	//int tab2[10] = {11, 112, 143, 1243, 3123, 4123, 5123, 92143, 352522, 3532523};
	printf("result: %d\n", ft_is_sort(tab, argc, &check_if_t));
}
*/
