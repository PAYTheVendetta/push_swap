/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:32:44 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/03 15:57:25 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	int_stack(t_stack *a, t_stack *b, t_data *data)
{
	a->stack = malloc(data->count * sizeof(long));
	if (a->stack == NULL)
		return (-1);
	b->stack = malloc(data->count * sizeof(long));
	if (b->stack == NULL)
		return (-1);
	a->head = 0;
	b->head = 0;
	a->maxnum = data->count;
	b->maxnum = 0;
	a->size = data->count;
	b->size = data->count;
	return (0);
}

int	standardezi_number(t_data *data, char **argv, t_stack *a, t_stack *b)
{
	data->count = 0;
	data->count = validate_and_count(data, data->argc, argv);
	if (data->count == -1)
		return (-1);
	if (int_stack(a, b, data) == -1)
		return (-1);
	if (buil_number_arry(data, a, argv, data->argc) == -1)
		return (-1);
	if (normalizer_arry(a, data) == -1)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;
	t_stack	a;
	t_stack	b;

	ft_memset(&a, 0, sizeof(t_stack));
	ft_memset(&b, 0, sizeof(t_stack));
	data.argc = argc;
	if (argc == 1)
		return (0);
	if (standardezi_number(&data, argv, &a, &b) == -1)
		return (freedi(&a, &b));
	sort_algorithm(&a, &b, &data);
	free(a.stack);
	free(b.stack);
	return (0);
}
