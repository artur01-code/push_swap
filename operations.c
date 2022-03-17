/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 13:09:19 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 Swap the first 2 elements at the top of stack x
*/
void	ft_swap(t_list **stack_input) //3 1 -55 ...
{
	t_list	*tmp;
	t_list	*tmp2;

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
void	ft_push(t_list **stack_dst, t_list **stack_src)
{
	t_list	*value;

	if (!(*stack_src))
		return ;
	value = ft_lstnew((*stack_src)->content);
	if ((*stack_dst)->content == 0)
		*stack_dst = value;
	else
		ft_lstadd_back(stack_dst, value);
	*stack_src = (*stack_src)->next;
}

/*
 Shift up all elements of stack_input by 1.
The first element becomes the last one.
*/
void	ft_rotate_up(t_list **stack_input) // 1 2 3 4 5 -3 -55 0 -5 99 420
{
	t_list	*tmp;
	t_list	*current;
	
	current = *stack_input;
	tmp = ft_lstlast(*stack_input);
	tmp->next = *stack_input;			//das letzte zeigt auf das erste
	*stack_input = (*stack_input)->next; //zeiger zeigt auf das zweite
	tmp->next->next = NULL;
}

/*
Reverse:
	Shift down all elements of stack_input by 1.
	The last element becomes the first one.
*/
void	ft_rotate_down(t_list **stack_input)  // 1 2 3 4 5 -3 -55 0 -5 99 420
{
	t_list	*tmp;
	t_list	*start_list;
	
	start_list = *stack_input; 					//zeige auf den start
	tmp = *stack_input;							//zeige auch auf den start
	while (tmp->next != NULL)					//gehe zum ende
		tmp = tmp->next;
	while ((*stack_input)->next->next != NULL)	//gehe zum vorletzten
		(*stack_input) = (*stack_input)->next;
	(*stack_input)->next = NULL;				//vorletztes wird zum letzten
	tmp->next = start_list;						//altes ende zeige auf den alten anfang
	(*stack_input) = tmp;						//liste zeige auf neuen Start
}
