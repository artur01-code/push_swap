/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:13:33 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 15:30:33 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
void ra(t_list **stack_a)
{
	ft_rotate_up(stack_a);
	printf("ra\n");
}

/*
 Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
void rb(t_list **stack_b)
{
	ft_rotate_up(stack_b);
	printf("rb\n");
}

/*
ra and rb at the same time.
*/
void rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_up(stack_a);
	ft_rotate_up(stack_b);
	printf("rr\n");
}