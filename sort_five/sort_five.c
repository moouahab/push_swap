/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:18:46 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:18:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	min_index(t_stack	pile)
{
	int	min_value;
	int	min_index;
	int	index;

	min_index = -1;
	min_value = INT_MAX;
	index = 0;
	while (pile != NULL)
	{
		if (pile->data < min_value)
		{
			min_value = pile->data;
			min_index = index;
		}
		pile->index_min = min_index;
		pile = pile->next;
		index++;
	}
	return (min_index);
}

static void	gestion_rotation(t_stack	*a, int min_id, int size)
{
	if (min_id <= size / 2)
		ra(a);
	else
		rra(a);
}

t_stack	sort_five(t_stack	*a, t_stack	*b)
{
	int	size;
	int	min_id;

	size = stack_size(*a);
	while (size > 3)
	{
		median_id(*a);
		min_id = min_index(*a);
		if (min_id == 0)
		{
			pb(b, a);
			size--;
		}
		else
			gestion_rotation(a, min_id, size);
	}
	sort_three_a(a);
	while (*b)
	{
		pa(b, a);
	}
	return (*a);
}
