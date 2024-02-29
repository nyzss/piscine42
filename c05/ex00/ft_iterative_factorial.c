/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:14:24 by okoca             #+#    #+#             */
/*   Updated: 2024/02/19 08:24:53 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb - 1 > 0)
	{
		result *= nb - 1;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int main()
{
	int result = iterative_factorial(5);
	printf("%d\n", result);
}
*/
