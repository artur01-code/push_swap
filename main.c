/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/24 12:33:52 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void print_bin(unsigned int nbr)
{
	if (nbr > 1)
		print_bin (nbr >> 1);
	printf("%d", nbr & 1);	
}*/

void ft_print_stack(t_list *stack_input, t_list *stack_tmp)
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = stack_input;
	tmp2 = stack_tmp;
	if (tmp1)
	{
		while (tmp1->next != NULL)
		{
			printf("stack_A(%d): %d\n", tmp1->index, tmp1->content);
			tmp1 = tmp1->next;
		}

		printf("stack_A(%d): %d\n", tmp1->index, tmp1->content);
	}
	printf("########################################\n");
	if (tmp2)
	{
		while (tmp2->next != NULL)
		{
			printf("stack_B(%d): %d\n", tmp2->index, tmp2->content);
			tmp2 = tmp2->next;
		}
		printf("stack_B(%d): %d\n", tmp2->index, tmp2->content);
	}
}

/*
static void do_tests(t_list *stack_input, t_list *stack_tmp)
{
	printf("----------------------------------------\n");
	printf("---------------START PRINTING-----------\n");
	printf("----------------------------------------\n");
	printf("------------------BEFORE----------------\n");
	ft_print_stack(stack_input, stack_tmp);
	printf("------------------AFTER----------------\n");
	//ft_swap(&stack_input);
	//ft_swap(&stack_input);
	ft_push(&stack_tmp, &stack_input);
	//ft_rotate_up(&stack_input);
	//ft_rotate_down(&stack_input);
	ft_print_stack(stack_input, stack_tmp);
	printf("------------------SECOND----------------\n");
	//ft_rotate_up(&stack_input);
	//ft_rotate_down(&stack_input);
	ft_push(&stack_tmp, &stack_input);
	ft_print_stack(stack_input, stack_tmp);
}

void small_sort(t_list *stack_a)
{
	t_list *content;
	int	big;

	content = ft_highest(stack_a);
	big = content->content;
	if (stack_a->content == big)
	{
		ra(&stack_a);
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
	{
		if (stack_a->content > stack_a->next->content)
			sa(&stack_a);
	}
}*/
void ft_free_var(t_list *stack_input, t_list *stack_tmp)
{
	while (stack_input->next != NULL)
	{
		free(stack_input);
		stack_input = stack_input->next;
	}
	free(stack_input);
	free(stack_tmp);
}

int	main(int argc, char **argv)
{
	t_list *stack_input;
	t_list *stack_tmp;
	int amount_of_elements;

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
	//do_tests(stack_input, stack_tmp);
	//ft_print_stack(stack_input, stack_tmp);
	if (amount_of_elements == 5)
		printf("small_sort with %d elements\n", amount_of_elements);
	ft_raddixsort(&stack_input, &stack_tmp);
	//ft_print_stack(stack_input, stack_tmp);
	ft_free_var(stack_input,stack_tmp);
	

	return (0);
}
