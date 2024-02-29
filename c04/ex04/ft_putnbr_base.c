/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:08:13 by okoca             #+#    #+#             */
/*   Updated: 2024/02/17 08:53:28 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	handle_base(char *base)
{
	int	i;
	int	j;
	int	base_size;

	i = 0;
	j = 1;
	base_size = ft_strlen(base);
	if (base_size < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	putn(long num, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (num > (base_size - 1))
		putn(num / base_size, base);
	ft_putchar(base[num % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;

	num = nbr;
	if (handle_base(base) == 0)
		return ;
	if (num < 0)
	{
		num *= -1;
		ft_putchar('-');
	}
	putn(num, base);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	ft_putnbr_base(5541, "0123");
}
*/
