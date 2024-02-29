/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:28:34 by okoca             #+#    #+#             */
/*   Updated: 2024/02/25 16:50:20 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_header.h"

int	get_total_group(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i % 3 != 0)
		i++;
	return (i / 3);
}

t_node *create_node(char *value, int group)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node*));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->group = group;
	return (new_node);
}

// push back to list
// return (0) on error and (1) on success
int	push_list(t_node *head, char *value, int group)
{
	t_node *tmp;
	t_node *new_node;

	new_node = create_node(value, group);
	if (!new_node)
		return (0);
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (1);
}

// commence par le end of string to beginning
/*
 * goal pour cette function
 * prendre un (char *str) comme parametre
 * le split en groupe de 3 pour ma liste enchainer (linked list)
 */

// parametre la ligne de nombre:
// ex: 745432 -> (745)-(432)
//

t_node *process_to_list(char *str)
{
	t_node	*head;
	t_node	*tmp_node;
	int	total_group;
	int	i;
	
	//creating the head
	head = (t_node*)malloc(sizeof(t_node));
	head->next = NULL;
	head->group = 0;
	tmp_node = head;
	// start from end of string
	i = 0;
	while (str[i])
		i++;
	i--;
	total_group = get_total_group(str);
	return (head);
}

//do process before linked list
#include <stdio.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*add_zeros(char *str)
{
	int	i;
	int	j;
	int	k;
	int	total_group;
	char	*ret;

	i = 0;
	j = 0;
	k = 0;
	while (str[j])
		j++;
	total_group = get_total_group(str);
	ret = (char*)malloc(sizeof(char) * ((total_group * 3) + 1));
	while (i < total_group * 3)
	{
		if (j < total_group * 3)
		{
			ret[i] = '0';
			j++;
			k++;
		}
		else if (i < j)
			ret[i] = str[i - k];
		i++;
	}
	free(str);
	return (ret);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("number of groups: %d\n", get_total_group(argv[1]));
	
	printf("%s\n", add_zeros(argv[1]));
}
