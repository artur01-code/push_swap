/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/14 15:45:24 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_stack(t_list **stack_input, t_list **stack_tmp)
{
	int i = 0;
	int j = 0;
	if (*stack_input)
	{
		while ((*stack_input)->next != NULL)
		{
			printf("stack_A(%d): %d\n", i++, (*stack_input)->content);
			*stack_input = (*stack_input)->next;
		}
	}
	if (*stack_tmp)
	{
		while ((*stack_tmp)->next != NULL)
		{
			printf("stack_B(%d): %d\n", j++, (*stack_tmp)->content);
			*stack_tmp = (*stack_tmp)->next;
		}
	}
}

int	main(int argc, char **argv)
{
	t_list *stack_input;
	t_list *stack_tmp;

	stack_input = malloc(sizeof(t_list));
	stack_tmp = malloc(sizeof(t_list));
	if (!stack_input)
		exit(1);
	if (!stack_tmp)
		exit(1);
	if (argc < 2)
		printf("You have to pass a list: %d\n", argc); //CHANGE
	else
		handle_input(stack_input, argc, argv);
	ft_print_stack(&stack_input, &stack_tmp);
	printf("-----------------------------------------\n");
	//ft_swap(&stack_input);
	//ft_push(&stack_tmp, &stack_input);
	//ft_push(&stack_tmp, &stack_input);
	//ft_rotate(&stack_input);
	ft_print_stack(&stack_input, &stack_tmp);
	free(stack_input);
	free(stack_tmp);

	return (0);
}
