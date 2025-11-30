/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:21 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:57:52 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	rotate(t_stack *x)
{
	int	tem;
	int	n;

	n = 0;
	if (x->maxnum <= 1)
		return ;
	tem = x->stack[x->head];
	while (n <= x->maxnum)
	{
		x->stack[x->head + n] = x->stack[x->head + n + 1];
		n++;
	}
	x->stack[x->head + x->maxnum] = tem;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
