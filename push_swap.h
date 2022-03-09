/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:23:40 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/09 14:57:08 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h> //RM

char	**ft_split(const char *str, char c);

typedef struct t_list {
	int	content;
	void *next;
}				s_list;

size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_countwords(const char *str, char c);
size_t	ft_wordlen(const char *str, char c);
char	**ft_freemem(char **new, size_t count);
char	**ft_fillwords(char **new, const char *str, char c, size_t count);
char	**ft_split(const char *str, char c);
char	*ft_strchr(char *s, char c); //not used
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);
void handle_input(struct t_list *stack_input, int argc, char **argv);
int check_dup(char **argv, int nbr);
void fill_stack_input(struct t_list **stack_input, int value);
void split_and_fill_stack_input(struct t_list **stack_input, char *tmp);
void	check_values(struct t_list *stack_input);


#endif