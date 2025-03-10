#include "../push_swap.h"

t_stack *find_min(t_stack *stack)
{
	if (!stack)
		return (NULL);
	long int min;
	t_stack *min_node;
	min = LONG_MAX;

	
	

	while (stack)
	{
		if (stack->number < min)
		{
			min = stack->number;
			min_node = stack;
		}
		
		stack = stack->next;		
	}

	return min_node;
}

t_stack *find_max(t_stack *stack)
{
	if (!stack)
		return (NULL);
	long int max;
	t_stack *max_node;
	max = LONG_MIN;

	while (stack)
	{
		if (stack->number > max)
		{
			max = stack->number;
			max_node = stack;
		}
		
		stack = stack->next;		
	}

	return max_node;
}

int stack_size(t_stack *stack)
{
	int count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}

	return count;
}

t_stack *ft_lstlast(t_stack *stack)
{
    if (!stack)
        return NULL;
    while (stack->next)  
        stack = stack->next;
    return stack;
}