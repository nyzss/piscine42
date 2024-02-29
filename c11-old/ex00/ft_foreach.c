/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:56:44 by okoca             #+#    #+#             */
/*   Updated: 2024/02/28 15:42:19 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void	print_numbers(int a)
{
	printf("%d\n", a * 2);
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int main()
{
	int tab[5] = {12, 33, 22, 5123, 123};
	ft_foreach(tab, 5, &print_numbers);
}
*/
