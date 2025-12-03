/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:54:31 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 16:12:44 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
# include "sorting.h"

int	update_head(int a, int b)
{
	int	val;

	val = a % b;
	if (val < 0)
		val += b;
	return (val);
}

int	validate_sorted(t_stack *a)
{
	int	n;

	n = 0;
	while (a->maxnum > (n + 1))
	{
		if (a->stack[a->head + n] > a->stack[a->head + n + 1])
			return (-1);
		n++;
	}
	return (0);
}

int	freedi(t_stack *a, t_stack *b)
{
	if (a->stack)
		free(a->stack);
	if (b->stack)
		free(b->stack);
	ft_printf("Error\n");
	return (0);
}

int	limits(t_data *data, t_stack *b)
{
	int	limit;

	limit = data->k;
	if (limit > b->maxnum)
		limit = b->maxnum;
	if (limit > b->size - b->head)
		limit = b->size - b->head;
	return (limit);
}

void	move_target(t_stack *a, t_stack *b, int n, int s)
{
	if (s == 1)
	{
		while (n-- > 0)
			rb(b);
	}
	else
	{
		while (n-- > 0)
			rrb(b);
	}
	pa(a, b);
}
