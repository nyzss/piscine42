/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:51:35 by okoca             #+#    #+#             */
/*   Updated: 2024/02/22 11:30:07 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i == 0 && i > 1))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(123));
}
*/