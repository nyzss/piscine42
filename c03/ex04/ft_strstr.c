/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:20:53 by okoca             #+#    #+#             */
/*   Updated: 2024/02/13 08:09:51 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j] && str[i + j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char s1[100] = "hello world";
	char s2[100] = "lo";

	char *s3 = ft_strstr(s1, s2);

	printf("%s\n", s3);
}
*/
//increment i when found until end, then do i - size of str
// check que quand s1 est vide sa return (null).
