#include "../push_swap.h"

static void	rotate_both(t_stack **a,
						t_stack **b,
						t_stack *cheapest_node) 
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node) 
		rr(a, b); 
	current_index(*a);
	current_index(*b);
}

static void	rev_rotate_both(t_stack **a,
								t_stack **b,
								t_stack *cheapest_node) 
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node) 
		rrr(a, b); 
	current_index(*a); 
	current_index(*b);
}

static void	move_a_to_b(t_stack **a, t_stack **b) 
{
	t_stack	*cheapest_node; 

	cheapest_node = get_cheapest(*a); 
	if (cheapest_node->above_median 
		&& cheapest_node->target_node->above_median) 
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median) 
		&& !(cheapest_node->target_node->above_median)) 
		rev_rotate_both(a, b, cheapest_node); 
	prep_for_push(a, cheapest_node, 'a'); 
	prep_for_push(b, cheapest_node->target_node, 'b'); 
	pb(b, a);
}

static void	move_b_to_a(t_stack **a, t_stack **b) 
{
	prep_for_push(a, (*b)->target_node, 'a'); 
	pa(a, b); 
}

static void	min_on_top(t_stack **a) 
{
	while ((*a)->number != find_min(*a)->number) 
	{
		if (find_min(*a)->above_median) 
			ra(a);
		else
			rra(a);
	}
}

void	sort_stacks(t_stack **a, t_stack **b) 
{
	int	len_a; 

	len_a = stack_size(*a);
	if (len_a-- > 3 && !stack_sorted(*a)) 
		pb(b, a);
	if (len_a-- > 3 && !stack_sorted(*a)) 
		pb(b, a);
	while (len_a-- > 3 && !stack_sorted(*a)) 
	{
		init_nodes_a(*a, *b); 
		move_a_to_b(a, b); 
	}
	sort_three(a);
	while (*b) 
	{
		init_nodes_b(*a, *b); 
		move_b_to_a(a, b); 
	}
	current_index(*a); 
	min_on_top(a); 
}
