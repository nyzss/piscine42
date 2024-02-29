/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:24:26 by okoca             #+#    #+#             */
/*   Updated: 2024/02/11 14:26:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int longueur, char deb, char mid, char fin)
{
	int	compteur;

	compteur = 1;
	while (compteur <= longueur)
	{
		if (compteur == 1)
			ft_putchar(deb);
		if (compteur == longueur && longueur != 1)
			ft_putchar(fin);
		else if (compteur > 1 && compteur < longueur)
			ft_putchar(mid);
		compteur++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	lcompt;

	lcompt = 1;
	if (x >= 1 && y >= 1)
	{
		while (lcompt <= y)
		{
			if (lcompt == 1)
				ft_print(x, 'o', '-', 'o');
			else if (lcompt == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			lcompt++;
		}
	}
}
