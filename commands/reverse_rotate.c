#include "../push_swap.h"

void reverse_rotate(t_stack **head)
{
	t_stack *last_node;

	last_node = ft_lstlast(*head);
	(*head)->prev = last_node;
	last_node->prev->next = NULL;
	last_node->next = *head;
	last_node->prev =NULL;
	*head = last_node;
}

void rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void rrr(t_stack **a,t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);

	ft_printf("rrr\n");

}