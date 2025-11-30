/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:17 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:57:38 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	push(t_stack *src, t_stack *dst)
{
	int	tem;

	if (src->maxnum < 1)
		return ;
	tem = src->stack[src->head];
	src->head = update_head((src->head + 1), src->size);
	src->maxnum--;
	dst->head = update_head((dst->head - 1), dst->size);
	dst->stack[dst->head] = tem;
	dst->maxnum++;
}

void	pa(t_stack *a, t_stack *b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_printf("pb\n");
}
