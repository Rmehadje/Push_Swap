/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:48:26 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 19:08:40 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	find_value_for_index(t_list	*copy, t_list	**stack_a)
// {
// 	int	index;
// 	t_list	*cp;
// 	t_list	*tmp;

// 	cp = copy;
// 	while (copy)
// 	{
// 		index = 0;
// 		tmp = *stack_a;
// 		while (tmp)
// 		{
// 			if (tmp->content == copy->content)
// 			{
// 				copy->content = index;
// 				break ;
// 			}
// 			tmp = tmp->next;
// 			index++;
// 		}
// 		copy = copy->next;
// 	}
// }

static void	leaks()
{
	system("leaks push_swap");
}

void	ft_sorter(t_list **stack_a, t_list **stack_b, int i)
{
	if (i == 2)
		two_sort(stack_a);
	else if (i == 3)
		three_sort(stack_a);
	else if (i == 4)
		ft_sortagain(stack_a, stack_b);
	else if (i == 5)
		sort_five(stack_a, stack_b);
	else
	{
		first_phase(stack_a, stack_b, i);
		second_phase(stack_a, stack_b, i);
	}
}

int	main(int	argc,	char **argv)
{
	t_list	*head;

	// atexit(leaks);
	head = NULL;
	if (argc <= 2)
		return (write(2, "ERROR\n", 7), 0);
	init_args(argv);
}
