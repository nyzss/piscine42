/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:44:40 by okoca             #+#    #+#             */
/*   Updated: 2024/02/11 09:54:35 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main()
{
	char *s1 = "01958712364";
	char *s2 = "a0";
	char *s3 = "12312f";

	int f = ft_str_is_numeric(s1);
	int g = ft_str_is_numeric(s2);
	int h = ft_str_is_numeric(s3);
	printf("%d, %d, %d\n", f, g, h);
}
*/
