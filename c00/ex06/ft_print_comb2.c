/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 07:16:25 by okoca             #+#    #+#             */
/*   Updated: 2024/02/09 10:57:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int a, int b, int c, int d)
{
	pchar(a + '0');
	pchar(b + '0');
	pchar(' ');
	pchar(c + '0');
	pchar(d + '0');
	if (a == 9 && b == 8 && c == 9 && d == 9)
	{
		return ;
	}
	pchar(',');
	pchar(' ');
}

void	second_iterate(int a, int b, int c, int d)
{
	while (c <= 9)
	{
		while (d <= 9)
		{
			print_numbers(a, b, c, d);
			d++;
		}
		c++;
		if (c > a)
		{
			d = 0;
		}
		else
		{
			d = b + 1;
		}
	}
}

void	iterate_numbers(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			second_iterate(a, b, c, d);
			b++;
			d = b + 1;
			c = a;
		}
		a++;
		b = 0;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	iterate_numbers(a, b, c, d);
}
