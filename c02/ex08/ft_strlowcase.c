/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:24:04 by okoca             #+#    #+#             */
/*   Updated: 2024/02/12 11:57:20 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]) == 1)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char s1[] = "hellOWorld, SKJLFLSDF how IS, do123";

	char *s2 = (char*) malloc(100 * sizeof(char));
	s2 = ft_strlowcase(s1);

	printf("%s\n%s\n", s1, s2);
}
*/
