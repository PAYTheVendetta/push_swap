/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:12 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 15:57:58 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	reverse_rotate(t_stack *x)
{
	int	tem;
	int	n;

	if (x->maxnum <= 1)
		return (-1);
	n = x->maxnum - 1;
	tem = x->stack[x->head + n];
	while (n > 0)
	{
		x->stack[x->head + n] = x->stack[x->head + n - 1];
		n--;
	}
	x->stack[x->head] = tem;
	return (0);
}

void	rra(t_stack *a)
{
	if (reverse_rotate(a) == 0)
		ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	if (reverse_rotate(b) == 0)
		ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	if ((reverse_rotate(a) == 0) && (reverse_rotate(b) == 0))
		ft_printf("rrr\n");
}
