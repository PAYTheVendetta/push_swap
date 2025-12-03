/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:17 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 15:57:54 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	push(t_stack *src, t_stack *dst)
{
	int	tem;

	if (src->maxnum < 1)
		return (-1);
	tem = src->stack[src->head];
	src->head = update_head((src->head + 1), src->size);
	src->maxnum--;
	dst->head = update_head((dst->head - 1), dst->size);
	dst->stack[dst->head] = tem;
	dst->maxnum++;
	return (0);
}

void	pa(t_stack *a, t_stack *b)
{
	if (push(b, a) == 0)
		ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (push(a, b) == 0)
		ft_printf("pb\n");
}
