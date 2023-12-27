/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_noeud_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:05 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_target_noeud_b(t_element_stack	*a, t_element_stack	*b)
{
	t_element_stack	*current_a;
	t_element_stack	*target_node;
	long			best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->data > b->data
				&& current_a->data < best_index)
			{
				best_index = current_a->data;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_index == LONG_MAX)
			b->target_node = find_min_ft(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_node_b(t_stack	a, t_stack	b)
{
	stack_size(a);
	median_id(a);
	stack_size(b);
	median_id(b);
	set_target_noeud_b(a, b);
}
