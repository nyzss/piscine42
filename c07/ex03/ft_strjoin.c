/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:59:53 by okoca             #+#    #+#             */
/*   Updated: 2024/02/21 10:46:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dst_size;

	i = 0;
	dst_size = ft_strlen(dest);
	while (src[i])
	{
		dest[dst_size + i] = src[i];
		i++;
	}
	dest[dst_size + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		result = NULL;
		return (result);
	}
	result = (char *)malloc(sizeof(char) * get_total_len(size, strs, sep) + 1);
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	result[ft_strlen(result)] = '\0';
	return (result);
}

/*
#include <stdio.h>

int main()
{
	char sep[10] = "---";
	int size = 4;
	char **strs = (char**) malloc(sizeof(char*) * size);
	strs[0] = "hello";
	strs[1] = "salut";
	strs[2] = "bonjour";
	strs[3] = "piscine";

	char *res = ft_strjoin(size, strs, sep);
	printf("res: %s\n", res);
}
*/
