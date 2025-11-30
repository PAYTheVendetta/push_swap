/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalicer_arry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:36:47 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 13:10:51 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int sortnum(int *num)
{
	int	n;
	int	tem;

	n = 0;
	while (num[n] && num[n + 1])
	{
		if(num[n] > num[n + 1])
		{
			tem = num[n];
			num[n] = num[n + 1];
			num[n + 1] = tem;
			n = 0;
		}
		n++;
	}
	return (0);
}

void scramble_numbers(t_stack *a, t_data *data, int *num)
{
	int	n;
	int	i;
	int	count;
	
	n = -1;
	i = -1;
	count = data->count;
	while (num[++n])
	{
		while (a->stack[++i])
		{
			if (num[n] == a->stack[i])
			{
				a->stack[i] = (data->count - count + 1);
				count--;
			}
		}
		i = -1;
	}
}

int normalizer_arry(t_stack *a, t_data *data)
{
	int	*num;
	int	n;

	n = -1;
	num = malloc(data->count * sizeof(int));
	if (!num)
		return (-1);
	while (a->stack[++n])
		num[n] = a->stack[n];
	if (sortnum(num) == -1)
		return (-1);
	scramble_numbers(a, data, num);
	free(num);
	return (0);
}
