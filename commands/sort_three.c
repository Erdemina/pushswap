/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:22:40 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/20 17:22:41 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	min_on_top(t_stack **a)
{
	while ((*a)->number != find_min(*a)->number)
	{
		if (find_min(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}
