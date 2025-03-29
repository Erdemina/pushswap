/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:23:01 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/26 00:45:39 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	char **numbers;
	char *all_args;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	all_args = join_args(argc, argv);
	numbers = ft_split(all_args, ' ');
	free(all_args);
	init_stack_a(&a, numbers);
	if (!stack_sorted(a))
	{
		if (stack_size(a) == 2)
			sa(&a);
		else if (stack_size(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
