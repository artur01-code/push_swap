/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:45:07 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 10:48:58 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_dup(t_list **stack_input, int value)
{
	t_list	*curr;

	curr = *stack_input;
	while (curr->next != NULL)
	{
		if (curr->content == value)
			return (1);
		else
			curr = curr->next;
	}
	return (0);
}
