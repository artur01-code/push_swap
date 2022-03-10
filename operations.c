/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 11:46:43 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void ft_swap(struct t_list *stack_input)
{
	struct t_list *tmp;
	struct t_list *tmp2;

	tmp = malloc(sizeof(tmp));
	tmp2 = malloc(sizeof(tmp2));

	if (!stack_input)
		return ;
	tmp->next = stack_input;
	tmp2->next = stack_input->next->next;
	stack_input = (stack_input)->next;
	stack_input->next = tmp->next;
	stack_input->next->next = tmp2->next;
	free(tmp);
	free(tmp2);

	struct t_list *cur;
	cur = stack_input;
	printf("---------------------\n");
	while (cur->next != NULL)
	{
		printf("%d\n", cur->content);
		cur = cur->next;
		//printf("%d\n", cur->content);
	}
}

/*
int calc_last_two_elements(struct t_list **stack_input, struct t_list *last, struct t_list *before_last)
{
	int	size;
	int i;

	last = *stack_input;
	before_last = *stack_input;
	size = 0;
	i = 0;
	while (last->next != NULL)
	{
		size++;
		last = last->next;
	}
	while (i < size)
		before_last = before_last->next;
	return (size);
}


void ft_sa(struct t_list **stack_input)
{
	struct t_list *last;
	struct t_list *before_last;
	struct t_list *curr;
	int size;
	int i;

	size = 0;
	i = 0;
	// last = malloc(sizeof(last));
	// before_last = malloc(sizeof(before_last));
	// curr = malloc(sizeof(curr));
	curr = *stack_input;
	calc_last_two_elements(stack_input, last, before_last);
	while (i < size - 1)
	{
		curr = curr->next;
	}
	curr = last;
	curr = curr->next;
	curr = before_last;
}*/