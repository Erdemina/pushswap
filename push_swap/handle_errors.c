#include "../push_swap.h"


int	check_string(char *str)
{
	
	if (!(str[0] == '+'
			|| str[0] == '-'
			|| (str[0] >= '0' && str[0] <= '9')))
				{
					return(1);
				}
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
		if (a->number == n){
			return (1);
	
		}
		a = a->next;
	}
	
	return (0);
}
void free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack *current;

	if(!stack)
		return;
	current = *stack;

	while (current)
	{
		tmp = current->next;
		current->number = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}
void free_errors(t_stack **stack)
{
	free_stack(stack);
	ft_printf("Error\n");
	exit(1);
}