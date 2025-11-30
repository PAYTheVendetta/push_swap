/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:32:44 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:50:42 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	int_stack(t_stack *a, t_stack *b, t_data *data)
{
	a->stack = malloc(data->count * sizeof(int));
	if (a->stack == NULL)
		return (-1);
	b->stack = malloc(data->count * sizeof(int));
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

void	standardezi_number(t_data *data, char **argv, t_stack *a, t_stack *b)
{
	data->count = 0;
	data->count = validate_and_count(data, data->argc, argv);
	if (data->count == -1)
		return ;
	if (int_stack(a, b, data) == -1)
		return ;
	if (buil_number_arry(data, a, argv, data->argc) == -1)
		return ;
	if (normalizer_arry(a, data) == -1)
		return ;
}

int	main(int argc, char **argv)
{
	t_data	data;
	t_stack	a;
	t_stack	b;

	data.argc = argc;
	if (argc == 1)
		return (0);
	standardezi_number(&data, argv, &a, &b);
	sort_algorit(&a, &b, &data);
	return (0);
}
