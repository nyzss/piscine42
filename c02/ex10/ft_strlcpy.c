/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:55:58 by okoca             #+#    #+#             */
/*   Updated: 2024/02/13 07:16:57 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_size);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

/*
#include <stdio.h>
int main()
{
	char s1[100];
	char s2[] = "hello";

	int n = ft_strlcpy(s1, s2, 5);

	printf("%s\n%s\n%d\n", s1, s2, n);
}*/
