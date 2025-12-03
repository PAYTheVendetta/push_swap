/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:25 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 15:58:02 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	swap(t_stack *x)
{
	int	tem;

	if (x->maxnum <= 1)
		return (-1);
	tem = x->stack[x->head];
	x->stack[x->head] = x->stack[x->head + 1];
	x->stack[x->head + 1] = tem;
	return (0);
}

void	sa(t_stack *a)
{
	if (swap(a) == 0)
		ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	if (swap(b) == 0)
		ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	if ((swap(a) == 0) && (swap(b) == 0))
		ft_printf("ss\n");
}
