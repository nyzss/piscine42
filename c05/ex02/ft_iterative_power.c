/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:05:48 by okoca             #+#    #+#             */
/*   Updated: 2024/02/19 08:25:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	initial;

	initial = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power - 1 > 0)
	{
		nb *= initial;
		power--;
	}
	return (nb);
}

/*
int main()
{
	printf("%d\n", ft_iterative_power(2, 8));
}
*/
