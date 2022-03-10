/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:45:07 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 08:51:52 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	check_dup(struct t_list **stack_input, int value)
{
	struct t_list *tmp;
	struct t_list *curr;

	tmp = malloc(sizeof(tmp));
	if (!tmp)
		exit(1);
	tmp->next = NULL;
	tmp->content = value;
	curr = *stack_input;
	while (curr->next != NULL)
	{
		if (curr->content == tmp->content)
			return (1);
		else
			curr = curr->next;
	}
	return (0);
}
