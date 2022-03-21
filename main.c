/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/21 12:20:19 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
	//ft_push(&stack_tmp, &stack_input);
	//ft_rotate_up(&stack_input);
	//ft_rotate_down(&stack_input);
	ft_print_stack(stack_input, stack_tmp);
	printf("------------------SECOND----------------\n");
	ft_rotate_up(&stack_input);
	//ft_rotate_down(&stack_input);
	//ft_push(&stack_tmp, &stack_input);
	ft_print_stack(stack_input, stack_tmp);
}*/



int	main(int argc, char **argv)
{
	t_list *stack_input;
	t_list *stack_tmp;

	stack_input = malloc(sizeof(t_list));
	stack_tmp = malloc(sizeof(t_list));
	if (!stack_input || !stack_tmp)
		exit(1);
	if (argc < 2)
		exit(1);
	else
		handle_input(stack_input, argc, argv);
	//do_tests(stack_input, stack_tmp);
	indexing(&stack_input);
	ft_print_stack(stack_input, stack_tmp);
	free(stack_input);
	free(stack_tmp);
	return (0);
}
