/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 09:16:27 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_or_rotate(t_list *stack_a)
{
	if (stack_a->content > stack_a->next->content)
		sa(&stack_a);
	else
		rra(&stack_a);
}

void	small_sort(t_list *stack_a)
{
	t_list	*content;
	int		big;

	content = ft_highest(stack_a);
	big = content->content;
	while (check_order(stack_a) == 1)
	{
		if (stack_a->content == big)
		{
			rra(&stack_a);
			if (stack_a->content > stack_a->next->content)
				sa(&stack_a);
		}
		else if (stack_a->next->content == big)
		{
			rra(&stack_a);
			if (stack_a->content > stack_a->next->content)
				sa(&stack_a);
		}
		else
			swap_or_rotate(stack_a);
	}
}

void	ft_free_var(t_list *stack_input, t_list *stack_tmp)
{
	while (stack_input->next != NULL)
	{
		free(stack_input);
		stack_input = stack_input->next;
	}
	free(stack_input);
	free(stack_tmp);
}

int	check_order(t_list *stack_a)
{
	t_list	*tmp;
	int		check_amount;

	tmp = stack_a;
	check_amount = 1;
	while (tmp->next != NULL)
	{
		if (tmp->index == check_amount)
			check_amount++;
		else
			return (1);
		tmp = tmp->next;
	}
	ft_free_var(stack_a, NULL);
	exit(0);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_input;
	t_list	*stack_tmp;
	int		amount_of_elements;

	stack_input = malloc(sizeof(t_list));
	stack_tmp = malloc(sizeof(t_list));
	if (!stack_input || !stack_tmp)
		exit(1);
	if (argc < 2)
		exit(1);
	else
		handle_input(stack_input, argc, argv);
	amount_of_elements = indexing(&stack_input);
	stack_tmp->index = -1;
	check_order(stack_input);
	if (amount_of_elements <= 9)
		small_sort(stack_input);
	else
		ft_raddixsort(&stack_input, &stack_tmp);
	ft_free_var(stack_input, stack_tmp);
	return (0);
}
