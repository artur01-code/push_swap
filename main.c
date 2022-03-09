/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:55:41 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/09 14:09:23 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	main(int argc, char **argv)
{
	struct t_list *stack_input;

	stack_input = malloc(sizeof(stack_input));
	if (!stack_input)
		return (0);
	if (argc < 2)
		printf("You have to pass a list: %d\n", argc); //CHANGE
	else
	{
		check_values(argv);
		handle_input(stack_input, argc, argv);
	}
	free(stack_input);
	return (0);
}