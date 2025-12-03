/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:21 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 15:58:01 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	rotate(t_stack *a)
{
	int	tem;
	int	n;

	n = 0;
	if (a->maxnum <= 1)
		return (-1);
	tem = a->stack[a->head];
	while (n < (a->maxnum - 1))
	{
		a->stack[a->head + n] = a->stack[a->head + n + 1];
		n++;
	}
	a->stack[a->head + a->maxnum - 1] = tem;
	return (0);
}

void	ra(t_stack *a)
{
	if (rotate(a) == 0)
		ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	if (rotate(b) == 0)
		ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	if ((rotate(a) == 0) && (rotate(b) == 0))
		ft_printf("rr\n");
}
