/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:12 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:57:45 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	reverse_rotate(t_stack *x)
{
	int	tem;
	int	n;

	if (x->maxnum <= 1)
		return ;
	n = x->maxnum - 1;
	tem = x->stack[x->head + n];
	while (n > 0)
	{
		x->stack[x->head + n] = x->stack[x->head + n - 1];
		n--;
	}
	x->stack[x->head] = tem;
}

void	rra(t_stack *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
