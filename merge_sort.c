/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:37:27 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/18 12:20:19 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list **one_stack_empty(t_list **stack_left, t_list **stack_right, t_list **new_list)
{
	while ((*stack_left)->next != NULL)
	{
		ft_push(new_list, stack_left);
		*stack_left = (*stack_left)->next;
	}
	while ((*stack_right)->next != NULL)
	{
		ft_push(new_list, stack_right);
		*stack_right = (*stack_right)->next;
	}
	return (new_list);
}

t_list	**merge_sort(t_list **stack_left, t_list **stack_right)
{
	t_list	**new_list;
	
	new_list = malloc(sizeof(new_list));
	while (((*stack_left)->next != NULL) && ((*stack_right)->next != NULL))
	{
		if ((*stack_left)->content <= (*stack_right)->content)
		{
			ft_push(new_list, stack_left);
			*stack_left = (*stack_left)->next;
		}
		else
		{
			ft_push(new_list, stack_right);
			*stack_right = (*stack_right)->next;
		}
	}
	return (one_stack_empty(stack_left, stack_right, new_list));
}

/*
counts how many items are in you list. If its more then 1
split them upinto a left and a right list.
*/
void	presort(t_list **stack_input)
{
	int		counter;
	t_list	*tmp;
	t_list	**stack_left;
	t_list	**stack_right;

	counter = 0;
	stack_left = malloc(sizeof(stack_left));
	stack_right = malloc(sizeof(stack_right)); //malloc fail case
	tmp = *stack_input;
	while ((*stack_input)->next != NULL)
	{
		*stack_input = (*stack_input)->next;
		counter++;
	}
	*stack_input = tmp;
	if (counter >= 1)
	{
		while (counter > 0)
		{
			*stack_left = *stack_input;
			*stack_right = (*stack_input)->next;
			*stack_left = (*stack_left)->next;
			*stack_right = (*stack_right)->next;
			*stack_input = (*stack_input)->next->next;
			counter -= 2;
		}
		stack_input = merge_sort(stack_left, stack_right);
	}
}
