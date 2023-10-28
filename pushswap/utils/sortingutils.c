/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingutils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:03:01 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 18:54:21 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	**copy_stack(t_list	**stack, char **tmp)
{
	t_list	**copy;

	copy = NULL;
	if (stack)
	{
		copy = (t_list **)malloc(sizeof(t_list *));
		init_numbers(copy, tmp);
	}

	// if (stack)
	// {
	// 	copy = malloc(sizeof(t_list));
	// 	copy->data = stack->data;
	// 	copy->next = NULL;
	// }
	// else
	// 	return (NULL);
	// tmp = stack;
	// head = copy;
	// while (tmp->next)
	// {
	// 	tmp = tmp->next;
	// 	new_node = malloc(sizeof(t_list));
	// 	new_node->data = tmp->data;
	// 	new_node->next = NULL;
	// 	copy->next = new_node;
	// 	copy = copy->next;
	// }
	return (copy);
}

void	find_value_for_index(t_list	*copy, t_list	**stack_a)
{
	t_list	*tmp;

	while (copy)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->data == copy->data)
			{
				tmp->index = copy->index;
				break ;
			}
			tmp = tmp->next;
		}
		copy = copy->next;
	}
}

static void	sort_for_index2(t_list *sorted, t_list **stack)
{
	// t_list	*tmp;
	// t_list	*current;
	// int		i;

	// i = 0;
	// current = sorted;
	// tmp = current;
	// while (current)
	// {
	// 	current->index = i;
	// 	i++;
	// 	current = current->next;
	// }
	find_value_for_index(sorted, stack);
}

void	sort_for_index(t_list **stack, char **tmp)
{
	t_list	*sorted;
	t_list	**current;
	t_list	*ttmp;

	current = copy_stack(stack, tmp);
	sorted = *current;
	while (sorted)
	{
		ttmp = *current;
		sorted->index = 0;
		while (ttmp)
		{
			if (sorted->data > ttmp->data)
				sorted->index++;
			ttmp = ttmp->next;
		}
		sorted = sorted->next;
	}
	sort_for_index2(*current, stack);
	ft_f(current);
	free(current);
}
