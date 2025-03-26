/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:22:47 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/26 15:39:26 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_string(char *str)
{
	if (!(str[0] == '+'
			|| str[0] == '-'
			|| (str[0] >= '0' && str[0] <= '9')))
	{
		return (1);
	}
	if (str[0] == '+' || str[0] == '-')
		str++;
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}
	return (0);
}

int	check_duplicate(t_stack *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a -> number == n)
		{
			return (1);
		}
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->number = 0;
		free(*stack);
		(*stack) = tmp;
	}
}

void	free_errors(t_stack **stack)
{
	free_stack(stack);
	ft_printf("Error\n");
	exit(1);
}
