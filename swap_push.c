/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:19:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 15:24:55 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void sa(t_list **stack_a)
{
	ft_swap(stack_a);
	printf("sa\n");
}

/*
 Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void sb(t_list **stack_b)
{
	ft_swap(stack_b);
	printf("sb\n");
}

/*
sa and sb at the same time.
*/
void ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	printf("ss\n");
}

/*
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	printf("pa\n");
}

/*
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/
void pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_b, stack_a);
	printf("pb\n");
}
