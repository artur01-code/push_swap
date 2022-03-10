/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:02:59 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 08:54:03 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char				*substring;
	unsigned int		i;

	substring = malloc((len + 1) * sizeof(char));
	if (!s || !substring)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
	{
		substring[0] = '\0';
		return (substring);
	}
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
