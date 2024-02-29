/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:10:52 by okoca             #+#    #+#             */
/*   Updated: 2024/02/20 12:01:54 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}

/*
#include <stdio.h>

int main()
{
	int *result;
	int min = 22;
	int max = 100;
	int size = max - min;

	int r = ft_ultimate_range(&result, min, max);

	int i = 0;
	while (i < size)
	{
		printf("%d, ", result[i]);
		i++;
	}
	printf("\nsize: %d\n", r);
}
*/
