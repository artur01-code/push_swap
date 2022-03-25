/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 09:20:30 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 Swap the first 2 elements at the top of stack x
*/
void	ft_swap(t_list **stack_input)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*stack_input)
		return ;
	tmp = *stack_input;
	tmp2 = (*stack_input)->next->next;
	*stack_input = (*stack_input)->next;
	(*stack_input)->next = tmp;
	(*stack_input)->next->next = tmp2;
}

/*
Take the first element at the top of src and put it at the top of dst.
Do nothing if src is empty.
*/
void	ft_push(t_list **stack_dst, t_list **stack_src)
{
	t_list	*tmp;

	if (!*stack_src)
		return ;
	tmp = *stack_dst;
	if ((*stack_dst)->index == 0)
	{
		(*stack_dst)->content = (*stack_src)->content;
		(*stack_dst)->index = (*stack_src)->index;
		(*stack_src) = (*stack_src)->next;
	}
	else
	{
		*stack_dst = *stack_src;
		*stack_src = (*stack_src)->next;
		(*stack_dst)->next = tmp;
	}
}

/*
 Shift up all elements of stack_input by 1.
The first element becomes the last one.
*/
void	ft_rotate_up(t_list **stack_input)
{
	t_list	*tmp;

	tmp = ft_lstlast(*stack_input);
	tmp->next = *stack_input;
	*stack_input = (*stack_input)->next;
	tmp->next->next = NULL;
}

/*
Reverse:
	Shift down all elements of stack_input by 1.
	The last element becomes the first one.
*/
void	ft_rotate_down(t_list **stack_input)
{
	t_list	*tmp;
	t_list	*start_list;

	start_list = *stack_input;
	tmp = *stack_input;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while ((*stack_input)->next->next != NULL)
		(*stack_input) = (*stack_input)->next;
	(*stack_input)->next = NULL;
	tmp->next = start_list;
	(*stack_input) = tmp;
}
