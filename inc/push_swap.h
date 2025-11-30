/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:35:27 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/30 22:49:25 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long	size;
	long	maxnum;
	long	head;
	int		*stack;
}	t_stack;

typedef struct s_data
{
	long	count;
	long	argc;
}	t_data;

/* parse_data */
long	validate_and_count(t_data *data, int argc, char **argv);
int		buil_number_arry(t_data *data, t_stack *a, char **argv, int argc);
int		normalizer_arry(t_stack *a, t_data *data);

/* utils */
int		update_head(int a, int b);

void	sort_algorit(t_stack *a, t_stack *b, t_data *data);

#endif