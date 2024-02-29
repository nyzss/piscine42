/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:33:34 by okoca             #+#    #+#             */
/*   Updated: 2024/02/14 07:58:01 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	is_alphabetic(char c)
{
	if (is_lowercase(c) == 1 || is_uppercase(c) == 1)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((is_alphabetic(str[i - 1]) != 1 && is_lowercase(str[i])) == 1)
		{
			if (is_numeric(str[i - 1]) != 1)
				str[i] -= 32;
		}
		else if (is_alphabetic(str[i - 1]) == 1 || is_numeric(str[i - 1]) == 1)
			if (is_uppercase(str[i]) == 1)
				str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char s1[] = "salut, 42mots cinquante+et+un, mots43, 82934DasdDA234das3DASD";
	ft_strcapitalize(s1);
	printf("%s\n", s1);
}
*/
