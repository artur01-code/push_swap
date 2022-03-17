/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:54:22 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/17 13:29:26 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_input(t_list *stack_input, int argc, char **argv)
{
	int	i;

	i = 2;
	if (argc > 2)
	{
		(stack_input)->content = ft_atoi(argv[1]);
		(stack_input)->next = NULL;
		while (argv[i])
			fill_stack_input(&stack_input, ft_atoi(argv[i++]));
	}
	else
		split_and_fill_stack_input(&stack_input, argv[1]);
}

void	fill_stack_input(t_list **stack_input, int value)
{
	t_list	*tmp;

	if(check_dup(stack_input, value))
	{
		printf("Error:\nDuplicate located.\n");
		exit(1);
	}
	tmp = ft_lstnew(value);
	ft_lstadd_back(stack_input, tmp);
}

void	split_and_fill_stack_input(t_list **stack_input, char *tmp)
{
	char	**nbrs;
	int		i;

	nbrs = ft_split(tmp, ' ');
	(*stack_input)->content = ft_atoi(nbrs[0]);
	(*stack_input)->next = NULL;
	i = 1;
	while (nbrs[i])
		fill_stack_input(stack_input, ft_atoi(nbrs[i++]));
}
