/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/16 14:43:23 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 Swap the first 2 elements at the top of stack x
*/
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

/*
Take the first element at the top of src and put it at the top of dst.
Do nothing if src is empty.
*/
void ft_push(t_list **stack_dst, t_list **stack_src)
{
	t_list *tmp_dst;
	t_list *tmp_src;

	if (!(*stack_src))
		return ;
	tmp_dst = *stack_dst;
	tmp_src = *stack_src;
	while (tmp_src->next->next != NULL)
		tmp_src = tmp_src->next;
	while (tmp_dst->next != NULL)
		tmp_dst = tmp_dst->next;
	tmp_dst->content = tmp_src->content;
	tmp_dst->next = tmp_src;
	tmp_src->next = NULL;
}

void	ft_rotate_up(t_list **stack_input) // 1 2 3 4 5 -3 -55 0 -5 99 420
{
	t_list *tmp;
	t_list *current;

	if (!*stack_input)
		return ;
	tmp = NULL;
	tmp->content = (*stack_input)->content;			//zeige auf die 1
	tmp->next = NULL;
	(*stack_input) = (*stack_input)->next;
	current = (*stack_input);					//zeige auf die 2
	while (current->next != NULL)			//gehe stack bis hinten durch
	 	current = current->next;
	current->content = tmp->content;
	current->next = tmp;
}

void	ft_rotate_down(t_list **stack_input)  // 1 2 3 4 5 -3 -55 0 -5 99 420
{
	t_list	*beginning;
	t_list	*current;
	t_list *new_end;
	
	beginning = *stack_input;
	current = *stack_input;
	printf("BEG: %d(%p) zeigt auf %p\n", beginning->content, beginning, beginning->next);
	while (current->next->next != NULL)			//gehe zum vorletzten element
		current = current->next;
	new_end = current;						//zeige auf vorletztes element (99)
	current = current->next;				//gehe weiter auf auf letztes (420)
	new_end->next = NULL;					//99 zeige auf NULL (end)
	*stack_input = current;					//zeige als erstes auf 420
	current->next = beginning;				//420 zeige auf die 1
	printf("NEW END: %d zeigt auf %p\n-----\n", new_end->content, new_end->next);
}
