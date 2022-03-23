/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:29:55 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/23 10:50:42 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_highest(t_list *stack_a)
{
	t_list	*highest;

	highest = stack_a;
	while (stack_a != NULL)
	{
		if (stack_a->content > highest->content)
			highest = stack_a;
		stack_a = stack_a->next;
	}
	return (highest);
}

static int	ft_count_and_init(t_list *stack_a)
{
	t_list	*tmp;
	int		counter;

	tmp = stack_a;
	counter = 0;
	while (tmp != NULL)
	{
		counter++;
		tmp->index = -1;
		tmp = tmp->next;
	}
	return (counter);
}

void	indexing(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*piv;
	int		counter;
	int		i;

	tmp = *stack_a;
	piv = ft_highest(*stack_a);
	counter = ft_count_and_init(*stack_a);
	i = 1;
	while (i <= counter)
	{
		while (tmp != NULL)
		{
			if (tmp->content <= piv->content && (tmp->index) == -1)
				piv = tmp;
			tmp = tmp->next;
		}
		piv->index = i++;
		tmp = *stack_a;
		piv = ft_highest(*stack_a);
	}
}
