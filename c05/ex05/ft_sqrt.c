/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:42:09 by okoca             #+#    #+#             */
/*   Updated: 2024/02/19 15:09:56 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb && nb > 0 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	if (nb == 1)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt());
}
*/