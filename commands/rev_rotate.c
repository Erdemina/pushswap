/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:22:33 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/20 17:24:41 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rev_rotate(t_stack **head)
{
	t_stack	*last_node;

	last_node = find_last(*head);
	(*head)->prev = last_node;
	last_node->prev->next = NULL;
	last_node->next = *head;
	last_node->prev = NULL;
	*head = last_node;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("rrr\n");
}
