/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:54:22 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 11:52:28 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void handle_input(struct t_list *stack_input, int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 2)
	{
		while (argv[i])
			fill_stack_input(stack_input, ft_atoi(argv[i++]));
	}
	else
		split_and_fill_stack_input(&stack_input, argv[1]);
//---------------PRINT_TEST---------------------------
	while (stack_input->next != NULL)
	{
		printf("%d\n", stack_input->content);
		stack_input = stack_input->next;
	}
//-----------------------------------------------------
}

void fill_stack_input(struct t_list *stack_input, int value)
{
	struct t_list *tmp;

	tmp = malloc(sizeof(tmp));
	if (!tmp)
		exit(1);
	tmp->content = value;
	tmp->next = NULL;
	if (check_dup(&stack_input, value))
		exit(1);
	while (stack_input->next != NULL)
		stack_input = stack_input->next;
	stack_input->content = tmp->content;
	stack_input->next = tmp;
	
}

void split_and_fill_stack_input(struct t_list **stack_input, char *tmp)
{
	char **nbrs;
	int value;
	int i;

	nbrs = ft_split(tmp, ' ');
	i = 0;
	while (nbrs[i])
		fill_stack_input(*stack_input, ft_atoi(nbrs[i++]));
}
