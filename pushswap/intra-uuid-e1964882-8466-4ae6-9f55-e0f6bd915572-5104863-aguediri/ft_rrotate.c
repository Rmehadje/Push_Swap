/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguediri <aguediri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:05:28 by aguediri          #+#    #+#             */
/*   Updated: 2023/10/13 19:09:54 by aguediri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_node **stack)
{
	t_node	*last;
	t_node	*second_lst;

	if (*stack == NULL || (*stack)-> next == NULL)
		return ;
	last = ft_lstlast(*stack);
	second_lst = *stack;
	while (second_lst -> next != last)
		second_lst = second_lst -> next;
	last -> next = *stack;
	*stack = last;
	second_lst -> next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack)
{
	t_node	*last;
	t_node	*second_lst;

	if (*stack == NULL || (*stack)-> next == NULL)
		return ;
	last = ft_lstlast(*stack);
	second_lst = *stack;
	while (second_lst -> next != last)
		second_lst = second_lst -> next;
	last -> next = *stack;
	*stack = last;
	second_lst -> next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_b);
	write(1, "rrr\n", 4);
}
