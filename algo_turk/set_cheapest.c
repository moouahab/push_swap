/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:17 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/26 01:20:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_cheapest(t_element_stack	*pile)
{
	long			cheapest_value;
	t_element_stack	*cheapest_node;

	cheapest_node = NULL;
	if (is_empty_stack(pile))
		return ;
	cheapest_value = LONG_MAX;
	while (pile)
	{
		if (pile->push_cost < cheapest_value)
		{
			cheapest_value = pile->push_cost;
			cheapest_node = pile;
		}
		pile->cheapest = FALSE;
		pile = pile->next;
	}
	if (cheapest_node)
		cheapest_node->cheapest = TRUE;
}

void	cost_analysis(t_element_stack	*a, t_element_stack	*b)
{
	t_element_stack	*current_a;
	int				len_a;
	int				len_b;

	current_a = a;
	len_a = stack_size(a);
	len_b = stack_size(b);
	while (current_a != NULL)
	{
		current_a->push_cost = current_a->index;
		if (!(current_a->median))
			current_a->push_cost = len_a - (current_a->index);
		if (current_a->target_node->median)
			current_a->push_cost += current_a->target_node->index;
		else
			current_a->push_cost += len_b - (current_a->target_node->index);
		current_a = current_a->next;
	}
}
