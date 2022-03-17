/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 15:04:59 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void ft_print_stack(t_list *stack_input, t_list *stack_tmp)
{
	t_list *tmp1;
	t_list *tmp2;
	int i = 0;
	int j = 0;
	tmp1 = stack_input;
	tmp2 = stack_tmp;
	if (tmp1)
	{
		while (tmp1->next != NULL && i < 15)
		{
			printf("stack_A(%d): %d		has the pointer %p points to %p\n", i++, tmp1->content, tmp1, tmp1->next);
			tmp1 = tmp1->next;
		}
		printf("stack_A(%d): %d		has the pointer %p points to %p\n", i++, tmp1->content, tmp1, tmp1->next);
	}
	printf("#################\n");
	if (tmp2)
	{
		while (tmp2->next != NULL)
		{
			printf("stack_B(%d): %d		has the pointer %p points to %p\n", j++, tmp2->content, tmp2, tmp2->next);
			tmp2 = tmp2->next;
		}
		printf("stack_B(%d): %d		has the pointer %p points to %p\n", j++, tmp2->content, tmp2, tmp2->next);
	}
}


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
	//merge(&stack_input);
	
	free(stack_input);
	free(stack_tmp);
	return (0);
}
