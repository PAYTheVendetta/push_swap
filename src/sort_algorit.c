/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:33:22 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:52:48 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorting.h"

void	sort_three(t_stack *a)
{
	if (a->stack[0] > a->stack[1] && a->stack[0] < a->stack[2])
		sa(a);
	if (a->stack[0] > a->stack[1] && a->stack[1] > a->stack[2])
	{
		ra(a);
		sa(a);
	}
	if (a->stack[0] > a->stack[1] && a->stack[1] < a->stack[2])
		ra(a);
	if (a->stack[2] < a->stack[1] && a->stack[0] > a->stack[2])
		rra(a);
	if (a->stack[0] < a->stack[1] && a->stack[1] > a->stack[2])
	{
		sa(a);
		ra(a);
	}
}

/* void	sort_five(t_stack *a)
{
	
} */

void	sort_algorit(t_stack *a, t_stack *b, t_data *data)
{
	b->stack[0] = 0;
/* 	if (validateSorted())
		return ; */
	if (data->count == 2)
		sa(a);
	else if (data->count == 3)
		sort_three(a);
/* 	else if (data->count <= 5)
		sort_five(a); */
/* 	else
		runfirststep(); */
}
