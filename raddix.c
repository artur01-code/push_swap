/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:40 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/23 13:47:34 by jtomala          ###   ########.fr       */
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
	int max_bits;
	int elements_size;

	max_bits = ft_calc_max_bits(*stack_a);
	elements_size = ft_count_elements(*stack_a);
	//printf("ELEMENTS: %d\n", elements_size);

	i = 0;
	j = 0;
	while (i < max_bits)
	{
		while (j < elements_size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while ((*stack_b)->next != NULL)
			pa(stack_a, stack_b);
		j = 0;
		i++;
	}
}