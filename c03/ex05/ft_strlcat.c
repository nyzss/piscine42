/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:22:08 by okoca             #+#    #+#             */
/*   Updated: 2024/02/13 15:54:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dst_init_size;

	i = 0;
	dst_init_size = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (dest[dst_init_size] != '\0')
		dst_init_size++;
	if (dst_init_size >= size)
		return (src_size + size);
	while (src[i] != '\0' && i < (size - dst_init_size - 1))
	{
		dest[dst_init_size + i] = src[i];
		i++;
	}
	dest[dst_init_size + i] = '\0';
	return (src_size + dst_init_size);
}

/*
#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char s1[100] = "42dfgdl33";
	char a[100] = "42dfgdl33";

	char s2[] = "l33r";

	unsigned int mine = ft_strlcat(s1, s2, 34);
	unsigned int real = strlcat(a, s2, 34);
	printf("mine: %s - %d\n", s1, mine);
	printf("real: %s - %d\n", a, real);
}
*/
