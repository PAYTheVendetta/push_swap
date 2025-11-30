/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:33:17 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 14:49:19 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	push(t_stack *src, t_stack *dst)
{
	int tem;
	
	if (src->maxnum < 1)
		return ;
	tem = src->stack[src->head];
	src->head = clhead();
	src->maxnum--;
	dst->head = clhead();
	dst->stack[dst->head] = tem;
	dst->maxnum++;
}
