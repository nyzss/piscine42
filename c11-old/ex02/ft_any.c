/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:14:40 by okoca             #+#    #+#             */
/*   Updated: 2024/02/28 17:01:50 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_if_t(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'i')
			return (1);
		i++;
	}
	return (0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}


#include <stdlib.h>
int main()
{
	char **name = (char **)malloc(sizeof(char *) * 5);
	name[0] = "triee";
	name[1] = "bowl";
	name[2] = "hat";
	name[3] = "mce";
	name[4] = NULL;

	printf("%d\n", ft_any(name, &check_if_t));
}
