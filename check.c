/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:45:07 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/09 14:11:27 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	check_values(char **argv)
{
	int i;
	int d1;
	int d2;
	
	i = 1;
	d1 = 0;
	d2 = 0;
	argv = malloc(sizeof(argv));
	while (argv[i])
	{
		d1 = ft_atoi(argv[i]);
		d2 = ft_atoi(argv[i + 1]);
		if (d1 == d2)
			exit(0);
		i++;
	}
}
