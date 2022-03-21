/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:40 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/21 15:57:58 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_elements(t_list *stack_a)
{
	t_list	*tmp;
	int		counter;

	tmp = stack_a;
	counter = 0;
	while (tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}

static int ft_calc_max_bits(t_list *stack_a)
{
	t_list	*tmp;
	int	max_num;
	int	max_bits;

	tmp = stack_a;
	max_num = ft_count_elements(stack_a);
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_raddixsort(t_list **stack_a, t_list **stack_b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ft_calc_max_bits(*stack_a))
	{
		printf("INDEX: %d\n", (*stack_a)->index);
		while (j < ft_count_elements(*stack_a))
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		j = 0;
		i++;
		while ((*stack_b)->next != NULL)
			pa(stack_a, stack_b);
	}
}