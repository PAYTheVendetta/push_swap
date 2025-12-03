/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:18:08 by aialonso          #+#    #+#             */
/*   Updated: 2025/12/02 17:06:22 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	isnum(char **arg, t_data *data)
{
	while (ft_isspace(**arg))
		(*arg)++;
	if (**arg == '+' || **arg == '-')
	{
		(*arg)++;
		if (!ft_isdigit(**arg))
			return (-1);
	}
	if (ft_isdigit(**arg))
		data->count++;
	while (ft_isdigit(**arg))
		(*arg)++;
	return (0);
}

long	validate_and_count(t_data *data, int argc, char **argv)
{
	int		i;
	char	*arg;
	int		count;

	i = 0;
	while (++i < argc)
	{
		arg = argv[i];
		count = data->count;
		while (*arg)
		{
			if (isnum(&arg, data) == -1)
				return (-1);
			if (!ft_isspace(*arg) && *arg)
				return (-1);
		}
		if (count == data->count)
			return (-1);
	}
	return (data->count);
}

int	handle_num(char **arg, t_stack *a, long i)
{
	char	number[31];
	int		n;

	number[30] = '\0';
	n = 0;
	while (ft_isspace(**arg))
		(*arg)++;
	while (ft_isdigit(**arg) || (**arg) == '-' || (**arg) == '+')
	{
		number[n++] = (**arg);
		(*arg)++;
	}
	number[n] = '\0';
	a->stack[i] = ft_atoi(number);
	if (a->stack[i] > INT_MAX || a->stack[i] < INT_MIN)
		return (-1);
	return (0);
}

int	check_nums(t_stack *a)
{
	int	n;
	int	i;
	int	len;

	len = a->size - 1;
	n = -1;
	while ((a->size - 1) > ++n)
	{
		i = 0;
		while (len >= ++i)
		{
			if (a->stack[n] == a->stack[n + i])
				return (-1);
		}
		len--;
	}
	return (0);
}


int	buil_number_arry(t_data *data, t_stack *a, char **argv, int argc)
{
	int			i;
	char		*arg;
	long		count;

	count = data->count;
	i = 0;
	while (++i < argc)
	{
		arg = argv[i];
		while (*arg)
		{
			if (handle_num(&arg, a, (data->count - count)) == -1)
				return (-1);
			count--;
		}
	}
	if (check_nums(a) == -1)
		return (-1);
	return (0);
}
