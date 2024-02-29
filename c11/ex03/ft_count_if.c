/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:28:59 by okoca             #+#    #+#             */
/*   Updated: 2024/02/27 07:54:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}

/*
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


#include <stdlib.h>
int main()
{
	char **name = (char **)malloc(sizeof(char *) * 4);
	name[0] = "triee";
	name[1] = "bowl";
	name[2] = "haiti";
	name[3] = "mce";
	//name[4] = NULL;

	printf("%d\n", ft_count_if(name, 4, &check_if_t));
}
*/
