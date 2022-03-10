/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:23:40 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/10 11:53:26 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h> //RM

char	**ft_split(const char *str, char c);

typedef struct t_list {
	int	content;
	struct t_list *next;
}				s_list;

size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_countwords(const char *str, char c);
size_t	ft_wordlen(const char *str, char c);
char	**ft_freemem(char **new, size_t count);
char	**ft_fillwords(char **new, const char *str, char c, size_t count);
char	**ft_split(const char *str, char c);
int	ft_atoi(const char *str);
void handle_input(struct t_list *stack_input, int argc, char **argv);
void fill_stack_input(struct t_list *stack_input, int value);
void split_and_fill_stack_input(struct t_list **stack_input, char *tmp);
int	check_dup(struct t_list **stack_input, int value);
void ft_swap(struct t_list *stack_input);
int calc_last_two_elements(struct t_list **stack, struct t_list *last, struct t_list *before_last);



#endif