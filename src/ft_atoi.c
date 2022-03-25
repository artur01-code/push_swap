/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:44:55 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/18 15:01:21 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	error_exit(void)
{
	printf("Error\n");
	exit(1);
}

static int check_calc_value(long res, int c, const char *str)
{
	res = (res * 10) + (str[c] - '0');
	if (res > 2147483647)
		error_exit();
	return ((int) res);

}

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c])
	{
		if (str[c] >= '0' && str[c] <= '9')
			res = check_calc_value(res, c, str);
		else
			error_exit();
		c++;
	}
	return (res * s);
}
