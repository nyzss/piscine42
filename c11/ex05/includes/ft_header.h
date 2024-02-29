/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:22:45 by okoca             #+#    #+#             */
/*   Updated: 2024/02/27 13:45:33 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>

int		ft_atoi(char *str);

int		ft_strlen(char *str);

void	ft_putnbr(int nb);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		sum(int a, int b);

int		sub(int a, int b);

int		multiply(int a, int b);

int		division(int a, int b);

int		modulo(int a, int b);

#endif
