#include "../push_swap.h"



static t_stack *ft_stack_new(int content)
{
    t_stack *new = malloc(sizeof(t_stack));
    if (!new)
        return NULL;  

    new->number = content;
    new->prev = NULL;
    new->next = NULL;
    return new;
}



static void ft_add_back(t_stack **stack, t_stack *stack_new)
{
	t_stack *last;
    if (!stack || !stack_new)
        return;

    stack_new->next = NULL;  

    if (*stack == NULL)
    {
        *stack = stack_new;
        stack_new->prev = NULL;  
        return;
    }

    last = find_last(*stack);

    if (last)
    {
        last->next = stack_new;
        stack_new->prev = last;
    }
}

void	init_stack_a(t_stack **a, char **argv) 
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (check_string(argv[i]))
			free_errors(a);
		n = ft_atoi2(argv[i]);
		if (n > INT_MAX || n < INT_MIN) 
			free_errors(a);
		if (check_duplicate(*a, (int)n))
			free_errors(a); 
		ft_add_back(a,ft_stack_new(ft_atoi(argv[i])));
		i++;
	}
}

t_stack	*get_cheapest(t_stack *stack) 
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(t_stack **stack,
						t_stack *top_node,
						char stack_name) 
{
	while (*stack != top_node) 
	{
		if (stack_name == 'a') 
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b') 
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}	
	}
}