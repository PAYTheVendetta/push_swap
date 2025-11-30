/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:25 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 14:06:48 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	swap(t_stack *x)
{
	int tem;

	if (x->maxnum <= 1)
		return ;
	tem = x->stack[x->head];
	x->stack[x->head] = x->stack[x->head + 1];
	x->stack[x->head + 1] = tem;
}

void sa(t_stack *a)
{
	swap(a);
	ft_printf("sa");
}
void sb(t_stack *b)
{
	swap(b);
	ft_printf("sb");
}

void ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss");
}