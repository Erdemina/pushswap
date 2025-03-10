#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	if (stack_size(*a) != 3)
		error_message();
	
	t_stack	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if((*a)->number > (*a)->next->number)
		sa(a);

}