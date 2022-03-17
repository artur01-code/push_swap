/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:54:22 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 11:11:17 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void handle_input(t_list *stack_input, int argc, char **argv)
{
	int i;

	i = 2;
	if (argc > 2)
	{
		(stack_input)->content = ft_atoi(argv[1]);
		(stack_input)->next = NULL;
		while (argv[i])
			fill_stack_input(&stack_input, ft_atoi(argv[i++]));
	}
	else
		split_and_fill_stack_input(&stack_input, argv[1]);
}

/*
void fill_stack_input(t_list **stack_input, int value)
{
	t_list *tmp;
	t_list *current;

	tmp = malloc(sizeof(tmp));
	if (!tmp)
		exit(1);
	tmp->content = value;
	tmp->next = NULL;
	current = *stack_input;
	if (check_dup(&current, value))
		exit(1);
	while (current->next != NULL)
		current = current->next;
	current->content = tmp->content;
	current->next = tmp;					//muss eigt auf NULL zeigen
	printf("%p\n", tmp);
	//free(tmp);
}*/

void fill_stack_input(t_list **stack_input, int value)
{
	t_list *tmp;

	tmp = ft_lstnew(value);
	ft_lstadd_back(stack_input, tmp);
}

void split_and_fill_stack_input(t_list **stack_input, char *tmp)
{
	char **nbrs;
	int i;

	nbrs = ft_split(tmp, ' ');
	i = 0;
	while (nbrs[i])
		fill_stack_input(stack_input, ft_atoi(nbrs[i++]));
}
