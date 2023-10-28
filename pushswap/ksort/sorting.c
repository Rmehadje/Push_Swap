/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:28:14 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 17:46:27 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int squareRoot(int n)
{
   float x;
   float y;
   float e;

	x = n;
	y = 1;
	e = 0.000001;
   while (x - y > e) {
      x = (x + y) / 2;
	   y = n / x;
   }
    return (x);
}

void	ft_sortagain(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = find_min_pos(*stack_a);
	if (i == 1)
		sa(stack_a);
	else if (i == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (i == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	three_sort(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	first_phase(t_list **stack_a, t_list **stack_b, int len)
{
	int		i;
	int	range;

	i = 1;
	range = (int)squareRoot(ft_lstsize(*stack_a)) * 14 / 10;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	second_phase(t_list **stack_a, t_list **stack_b, int len)
{
	int	rbc;
	int	rrbc;

	while (len - 1 >= 0)
	{
		rbc = ft_counter(stack_b, len - 1);
		rrbc = (len + 3) - rbc;
		if (rbc <= rrbc)
		{
			while ((*stack_b)->index != len - 1)
				rb(stack_b);
			pa(stack_a, stack_b);
			len--;
		}
		else
		{
			while ((*stack_b)->index != len - 1)
				rrb(stack_b);
			pa(stack_a, stack_b);
			len--;
		}
	}
}
