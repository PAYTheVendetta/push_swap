/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalicer_arry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:36:47 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 14:14:33 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	sortnum(int *num, int size)
{
	int	n;
	int	tem;
	int	len;

	len = size;
	while (len-- > 0)
	{
		n = 0;
		while ((size - 1) > n)
		{
			if (num[n] > num[n + 1])
			{
				tem = num[n];
				num[n] = num[n + 1];
				num[n + 1] = tem;
				continue ;
			}
			n++;
		}
	}
	return (0);
}

int	scramble_numbers(t_stack *a, t_data *data, int *num)
{
	int	n;
	int	i;
	int	count;
	int	*index;

	index = malloc((data->count) * sizeof(int));
	if (!index)
		return (-1);
	n = -1;
	count = data->count;
	while (data->count > ++n)
	{
		i = -1;
		while (data->count > ++i)
		{
			if (num[n] == a->stack[i])
				index[i] = (data->count - count-- + 1);
		}
	}
	i = -1;
	while (data->count > ++i)
		a->stack[i] = index[i];
	free(index);
	return (0);
}

int	normalizer_arry(t_stack *a, t_data *data)
{
	int	*num;
	int	n;

	n = -1;
	num = malloc(data->count * sizeof(int));
	if (!num)
		return (-1);
	while (a->size > ++n)
		num[n] = a->stack[n];
	if (sortnum(num, a->size) == -1)
		return (-1);
	if (scramble_numbers(a, data, num) == -1)
	{
		free(num);
		return (-1);
	}
	free(num);
	return (0);
}
