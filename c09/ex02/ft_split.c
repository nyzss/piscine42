/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:12:08 by okoca             #+#    #+#             */
/*   Updated: 2024/02/28 19:21:25 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			word_count++;
		i++;
	}
	return (word_count);
}

char	*ft_strndup(char *str, char *charset)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (str[j] && !is_sep(str[j], charset))
		j++;
	new = (char *)malloc(sizeof(char) * (j + 1));
	if (!new)
		return (NULL);
	while (i < j)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		result_idx;
	char	**result;

	i = 0;
	result_idx = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			result[result_idx] = ft_strndup(&str[i], charset);
			i += ft_strlen(result[result_idx]);
			result_idx++;
		}
	}
	result[result_idx] = 0;
	return (result);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 0;
	while (i < count_words(argv[1], argv[2]))
	{
		printf("%s\n", ft_split(argv[1], argv[2])[i]);
		i++;
	}
}
