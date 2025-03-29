/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:13:11 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/29 17:13:11 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

char *join_args(int argc, char **argv)
{
	int i;
	char *joined;
	char *tmp;

	i = 1;
	joined = ft_strdup("");
	while (i < argc)
	{
		tmp = ft_strjoin(joined, " ");
		free(joined);
		joined = ft_strjoin(tmp, argv[i]);
		free(tmp);
		i++;
	}
	return (joined);
}
