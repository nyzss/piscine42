/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:58:15 by okoca             #+#    #+#             */
/*   Updated: 2024/02/14 07:55:08 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	write_hex(unsigned char current_char)
{
	char			*hex;

	hex = "0123456789abcdef";
	if (current_char / 16 > 0)
	{
		ft_putchar(hex[current_char / 16]);
		ft_putchar(hex[current_char % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[current_char]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	current_char;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			current_char = str[i];
			ft_putchar('\\');
			write_hex(current_char);
		}
		i++;
	}
}

/*
int main() {
	char str[100] = "hello\n¥";
	ft_putstr_non_printable(str);
}
*/
