/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:59:35 by nzitout           #+#    #+#             */
/*   Updated: 2024/02/10 17:28:17 by nzitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_line(char debut, char milieu, char fin, int tailleX)
{
	int	compt;

	compt = 1;
	while (compt <= tailleX)
	{
		if (compt == 1)
		{
			ft_putchar(debut);
		}
		if (compt == tailleX && compt != 1)
		{
			ft_putchar(fin);
		}
		else if (compt > 1 && compt < tailleX)
			ft_putchar(milieu);
		compt++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{	
		while (j <= y)
		{
			if (j == 1)
				ft_print_line('A', 'B', 'C', x);
			if (j > 1 && j < y)
				ft_print_line('B', ' ', 'B', x);
			else if (j == y && j != 1)
				ft_print_line('C', 'B', 'A', x);
			j++;
			ft_putchar('\n');
		}
	}
}
