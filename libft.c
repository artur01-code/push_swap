/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:02:59 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/09 13:20:29 by jtomala          ###   ########.fr       */
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

char	*ft_strchr(char *s, char c)
{
	while (*s)
		if (*s++ == c)
			return (s);
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *) s1 + i) != *((char *) s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}