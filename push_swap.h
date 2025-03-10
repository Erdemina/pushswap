#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdbool.h>
# include "./libft/libft.h"
# include  "./printf/ft_printf.h"
# include <limits.h>
typedef struct s_stack
{
	int	number;
	int	index;
	int	push_cost;
	bool above_median;
	bool cheapest;
	struct s_stack *target_node;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

t_stack *ft_stack_new(int content);
t_stack *ft_lstlast(t_stack *stack);
void ft_add_back(t_stack **stack, t_stack *stack_new);
void init_stack_a(t_stack **stack, char **argv);
void ft_free(t_stack **lst);
void lststack(t_stack *lst);
void ft_index_stack(t_stack *stack);
void ft_add_front(t_stack **stack, t_stack *stack_new);
int stack_size(t_stack *stack);

void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a,t_stack **b);
void push(t_stack **dst,t_stack **src);
void pa(t_stack **a,t_stack **b);
void pb(t_stack**a,t_stack **b);
void swap(t_stack **head);
void ra(t_stack **a);
void rb(t_stack **a);
void rr(t_stack **a,t_stack **b);
void rotate(t_stack **head);
void rrr(t_stack **a,t_stack **b);
void rrb(t_stack **b);
void rra(t_stack **a);
void reverse_rotate(t_stack **head);

t_stack *find_max(t_stack *stack);
t_stack *find_min(t_stack *stack);

int	check_string(char **argv,int argc);
void	sort_three(t_stack **a);
void error_message();


void current_index(t_stack *stack);

#endif