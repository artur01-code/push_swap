/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:23:40 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/23 09:13:04 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h> //RM

typedef struct s_list{
	int				content;
	struct s_list	*next;
	int				index;
}				t_list;

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_countwords(const char *str, char c);
size_t	ft_wordlen(const char *str, char c);
char	**ft_freemem(char **new, size_t count);
char	**ft_fillwords(char **new, const char *str, char c, size_t count);
char	**ft_split(const char *str, char c);
int		ft_atoi(const char *str);
void	handle_input(t_list *stack_input, int argc, char **argv);
void	fill_stack_input(t_list **stack_input, int value);
void	split_and_fill_stack_input(t_list **stack_input, char *tmp);
int		check_dup(t_list **stack_input, int value);
void	ft_swap(t_list **stack_input);
void	ft_push(t_list **stack_dst, t_list **stack_src);
void	ft_rotate_up(t_list **stack_input);
void	ft_rotate_down(t_list **stack_input);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
t_list	*ft_highest(t_list *stack_a);
int		ft_count_elements(t_list *stack_a);
void	indexing(t_list **stack_a);
int		ft_highest_index(t_list *stack_a);
void	ft_raddixsort(t_list **stack_a, t_list **stack_b);
void	ft_print_stack(t_list *stack_input, t_list *stack_tmp); //RM


#endif