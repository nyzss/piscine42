/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:17:34 by okoca             #+#    #+#             */
/*   Updated: 2024/02/19 07:28:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb - 1 > 0)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_factorial(10));
}
*/
