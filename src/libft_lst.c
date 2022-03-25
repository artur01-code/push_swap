/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:11:20 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 11:49:44 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(*lst));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!*lst)
	{
		current = new;
		return ;
	}
	current = ft_lstlast(*lst);
	current->next = new;
}
