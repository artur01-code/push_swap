/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:37:27 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 14:15:55 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list **one_stack_empty(t_list **stack_left, t_list **stack_right, t_list **new_list)
{
	while (*stack_left)
	{
		ft_lstadd_back(new_list, *stack_left);
		*stack_left = (*stack_left)->next;
	}
	while (*stack_right)
	{
		ft_lstadd_back(new_list, *stack_right);
		*stack_right = (*stack_right)->next;
	}
	return (new_list);
}

static t_list	**merge_sort(t_list **stack_left, t_list **stack_right)
{
	t_list	**new_list;
	
	new_list = NULL;
	while ((*stack_left)->next != NULL && (*stack_right)->next != NULL)
	{
		if ((*stack_left)->content <= (*stack_right)->content)
		{
			ft_lstadd_back(new_list, *stack_left);
			*stack_left = (*stack_left)->next;
		}
		else
		{
			ft_lstadd_back(new_list, *stack_right);
			*stack_right = (*stack_right)->next;
		}
	}
	return (one_stack_empty(stack_left, stack_right, new_list));
}

/*
counts how many items are in you list. If its more then 1
split them upinto a left and a right list.
*/
void	merge(t_list **stack_input)
{
	t_list	**stack_left;
	t_list	**stack_right;
	int		counter;
	int		i;

	stack_left = malloc(sizeof(stack_left));
	stack_right = malloc(sizeof(stack_right));
	counter = 0;
	i = 0;
	while ((*stack_input)->next != NULL)
	{
		*stack_input = (*stack_input)->next;
		counter++;
	}
	if (counter >= 1)
	{
		while (i < counter)
		{
			*stack_left = *stack_input;
			*stack_right = (*stack_input)->next;
			*stack_input = (*stack_input)->next->next;
			i += 2;
		}
		stack_input = merge_sort(stack_left, stack_right);
	}
}
