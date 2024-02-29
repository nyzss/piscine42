/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:57:08 by braugust          #+#    #+#             */
/*   Updated: 2024/02/10 15:50:56 by braugust         ###   ########.fr       */
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
				ft_print(x, 'A', 'B', 'C');
			else if (lcompt == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			lcompt++;
		}
	}
}
