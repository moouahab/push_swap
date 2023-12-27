/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:23 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:24 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_target_noeud(t_element_stack	*a, t_element_stack	*b)
{
	t_element_stack	*current_b;
	t_element_stack	*target_node;
	long			best_index;

	while (a)
	{
		best_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->data < a->data
				&& current_b->data > best_index)
			{
				best_index = current_b->data;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_index == LONG_MIN)
			a->target_node = find_max_ft(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}
