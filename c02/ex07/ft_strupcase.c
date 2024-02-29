/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:05:10 by okoca             #+#    #+#             */
/*   Updated: 2024/02/12 11:55:34 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char s1[] = "hellOWorld, how IS, do123";

	char *s2 = (char*) malloc(100 * sizeof(char));
	s2 = ft_strupcase(s1);

	printf("%s\n%s\n", s1, s2);
}
*/
