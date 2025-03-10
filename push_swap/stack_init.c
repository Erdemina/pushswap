#include "../push_swap.h"



void init_stack_a(t_stack **stack, char **argv)
{

	int i = 0;
	long n;
	while (argv[i])
	{
		ft_add_back(stack,ft_stack_new(ft_atoi(argv[i])));
		i++;
	}
	
}

t_stack *ft_stack_new(int content)
{
    t_stack *new = malloc(sizeof(t_stack));
    if (!new)
        return NULL;  

    new->number = content;
    new->prev = NULL;
    new->next = NULL;
    return new;
}



void ft_add_back(t_stack **stack, t_stack *stack_new)
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

    last = ft_lstlast(*stack);

    if (last)
    {
        last->next = stack_new;
        stack_new->prev = last;
    }
}
void ft_add_front(t_stack **stack, t_stack *stack_new)
{
	if (!stack || !stack_new)
		return;
	(*stack)->prev = stack_new;
	stack_new->next = *stack;
	*stack = stack_new;
	
}



