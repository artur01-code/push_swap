/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:48:34 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 14:24:58 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void ft_swap(struct t_list *stack_input)
{
	struct t_list *tmp;
	struct t_list *tmp2;

	tmp = (t_list *)malloc(sizeof(tmp));
	tmp2 = (t_list *)malloc(sizeof(tmp2));

	if (!stack_input)
		return ;
	tmp = stack_input;				//tmp: zeige auf 3 -> 1
	tmp2 = stack_input->next->next;		//tmp2: zeige auf -55 -> 42
	stack_input = stack_input->next;				//stack zeige auf 1 -> -55
	stack_input->next = tmp;						//stack: 1 zeige auf 3	
	stack_input->next->next = tmp2;					//stack: 3 zeige auf -55
	printf("First:%d\n", stack_input->content);
	printf("Second:%d\n", stack_input->next->content);
	printf("Third:%d\n", stack_input->next->next->content);
		
	free(tmp);	
	free(tmp2);

	// struct t_list *cur;
	// cur = stack_input;
	// // printf("---------------------\n");
	// // while (cur->next != NULL)
	// // {
	// // 	printf("%d\n", cur->content);
	// // 	cur = cur->next;
	// // }
}

void ft_push(struct t_list *stack_dst, struct t_list *stack_src)
{
	while (stack_src->next->next != NULL)
		stack_src = stack_src->next;
	while (stack_dst->next != NULL)
		stack_dst = stack_dst->next;
	stack_dst->next = stack_src->next;
	stack_dst->content = stack_src->content;
	stack_src->next = NULL;
	stack_src->content = 0;

	//printf("src:%d\n", stack_src->content);
	//printf("dst:%d\n", stack_dst->content);
}