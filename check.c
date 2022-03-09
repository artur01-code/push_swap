/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:45:07 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/09 15:09:12 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	check_values(struct t_list *stack_input)
{
	struct t_list *tmp;
	struct t_list *beg;

	tmp = stack_input->next;
	beg = stack_input->next;
	while (stack_input->next != NULL)
	{
		while (tmp->next != NULL)
		{
			if(stack_input->content == tmp->content)
				printf("EXIT");
			tmp = tmp->next;
		}
		stack_input = stack_input->next;
	}
}
