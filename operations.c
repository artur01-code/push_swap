/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/14 15:41:49 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_list **stack_input) //3 1 -55 ...
{
	t_list *tmp;
	t_list *tmp2;

	if (!*stack_input)
		return ;
	tmp = *stack_input;						//tmp: zeige auf 3 -> 1
	tmp2 = (*stack_input)->next->next;		//tmp2: zeige auf -55 -> 42
	*stack_input = (*stack_input)->next;				//stack zeige auf 1 -> -55
	(*stack_input)->next = tmp;						//stack: 1 zeige auf 3	
	(*stack_input)->next->next = tmp2;					//stack: 3 zeige auf -55
}

void ft_push(t_list **stack_dst, t_list **stack_src)
{
	t_list *tmp;

	if (!(*stack_dst) || !(*stack_src))
		return ;
	tmp = *stack_src;
	while ((*stack_src)->next->next != NULL)
		(*stack_src) = (*stack_src)->next;
	while ((*stack_dst)->next != NULL)
		(*stack_dst) = (*stack_dst)->next;

	(*stack_dst) = (*stack_src);
	printf("CONTROLL: %d\n", (*stack_dst)->content);
	(*stack_src)->next = NULL;
	(*stack_src) = tmp;
}

void	ft_rotate(t_list **stack_input)
{
	t_list **tmp;

	if (!*stack_input)
		return ;
	*tmp = *stack_input;
	(*tmp)->next = NULL;
	*stack_input = (*stack_input)->next;
	//while ((*stack_input)->next != NULL)
	//	*(stack_input) = (*stack_input)->next;
	//(*stack_input) = *tmp;
	//free(tmp);
}
