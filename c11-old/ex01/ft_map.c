/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:04:48 by okoca             #+#    #+#             */
/*   Updated: 2024/02/27 07:13:26 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new;

	i = 0;
	new = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

/*
#include <stdio.h>
int	multiply(int a)
{
	int	b;
	b = a * 100;
	return (b);
}
*/

/*
int main()
{
	int tab[5] = {12, 33, 22, 5123, 123};
	int *tab2 = ft_map(tab, 5, &multiply);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", tab2[i]);
		i++;
	}
}
*/
