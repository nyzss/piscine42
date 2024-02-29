/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:38:31 by okoca             #+#    #+#             */
/*   Updated: 2024/02/19 07:28:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power - 1 > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(2, 10));
}
*/
