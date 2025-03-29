/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:22:59 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/26 16:00:48 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "./libft/libft.h"
# include "./printf/ft_printf.h"
# include <unistd.h>

typedef struct s_stack_node
{
	int					number;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack;



void free_numbers(char **numbers);
char *join_args(int argc, char **argv);
int check_string(char *str);
int				check_duplicate(t_stack *a, int n);
void			free_stack(t_stack **stack);
void			free_errors(t_stack **a);
long			ft_atoi2(const char *str);
void			init_stack_a(t_stack **a, char **argv);
void			init_nodes_a(t_stack *a, t_stack *b);
void			init_nodes_b(t_stack *a, t_stack *b);
void			current_index(t_stack *stack);
void			set_cheapest(t_stack *stack);
t_stack			*get_cheapest(t_stack *stack);
void			prep_for_push(t_stack **s, t_stack *n, char c);
int				stack_size(t_stack *stack);
t_stack			*find_last(t_stack *stack);
bool			stack_sorted(t_stack *stack);
t_stack			*find_min(t_stack *stack);
t_stack			*find_max(t_stack *stack);
void			sa(t_stack **a);
void			sb(t_stack **b);
void			ss(t_stack **a, t_stack **b);
void			ra(t_stack **a);
void			rb(t_stack **b);
void			rr(t_stack **a, t_stack **b);
void			rra(t_stack **a);
void			rrb(t_stack **b);
void			rrr(t_stack **a, t_stack **b);
void			pa(t_stack **a, t_stack **b);
void			pb(t_stack **b, t_stack **a);
void			min_on_top(t_stack **a);
void			sort_three(t_stack **a);
void			sort_stacks(t_stack **a, t_stack **b);

#endif
