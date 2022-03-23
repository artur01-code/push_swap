/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:26:01 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/23 13:56:18 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
(reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
void	rra(t_list **stack_a)
{
	ft_rotate_down(stack_a);
	write(1, "rra\n", 4);
}

/*
(reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
*/
void	rrb(t_list **stack_b)
{
	ft_rotate_down(stack_b);
	write(1, "rrb\n", 4);
}

/*
rra and rrb at the same time.
*/
void	rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_down(stack_a);
	ft_rotate_down(stack_b);
	write(1, "rrr\n", 4);
}
