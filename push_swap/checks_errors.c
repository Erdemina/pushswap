#include "../push_swap.h"

int	check_string(char **argv,int argc)
{
	int i;
	int j;

	i = 1;

	while (i<argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}
int	check_duplicate(t_stack *a)
{
	
	
}
void error_message()
{
	ft_printf("Error\n");
}