/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:33:22 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 16:14:04 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorting.h"
#include "libft.h"

void	sort_three(t_stack *a)
{
	int	head;
	int	med;
	int	low;

	head = a->stack[a->head];
	med = a->stack[a->head + 1];
	low = a->stack[a->head + 2];
	if (head > med && head < low)
		sa(a);
	else if (head > med && med > low)
	{
		ra(a);
		sa(a);
	}
	else if (head > med && med < low)
		ra(a);
	else if (med > head && head > low)
		rra(a);
	else if (head < med && med > low)
	{
		sa(a);
		ra(a);
	}
}

void	sort_five(t_stack *a, t_stack *b)
{
	while (a->maxnum > 3)
	{
		if (a->stack[a->head] >= 4)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	if (b->maxnum == 2 && b->stack[b->head] > b->stack[b->head + 1])
		sb(b);
	while (b->maxnum >= 1)
	{
		pa(a, b);
		ra(a);
	}
}

void	runfirststep(t_stack *a, t_stack *b, t_data *data)
{
	if (data->count <= 100)
		data->k = 15;
	else
		data->k = 30;
	while (a->maxnum > 0)
	{
		if (a->stack[a->head] <= b->maxnum)
		{
			pb(a, b);
			rb(b);
		}
		else if (a->stack[a->head] <= data->k + b->maxnum)
			pb(a, b);
		else
			ra(a);
	}
	return_a(a, b, data);
}

void	return_a(t_stack *a, t_stack *b, t_data *data)
{
	int	n;

	while (b->maxnum > 0)
	{
		n = -1;
		while (++n < limits(data, b))
		{
			if (b->stack[b->head + n] == (data->count - a->maxnum))
			{
				move_target(a, b, n, 1);
				break ;
			}
		}
		n = 0;
		while (++n <= limits(data, b))
		{
			if (b->stack[b->head + b->maxnum - n] == (data->count - a->maxnum))
			{
				move_target(a, b, n, 0);
				break ;
			}
		}
	}
}

void	sort_algorithm(t_stack *a, t_stack *b, t_data *data)
{
	if (validate_sorted(a) == 0)
		return ;
	else if (data->count == 2)
		sa(a);
	else if (data->count == 3)
		sort_three(a);
	else if (data->count <= 5)
		sort_five(a, b);
	else
		runfirststep(a, b, data);
}
