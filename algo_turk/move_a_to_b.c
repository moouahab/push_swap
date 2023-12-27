/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:13 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 22:49:51 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	get_cheapest(t_stack	pile)
{
	if (!pile)
		return (NULL);
	set_cheapest(pile);
	while (pile)
	{
		if (pile->cheapest)
			return (pile);
		pile = pile->next;
	}
	return (NULL);
}

void	rotate_both(t_stack	*a,
			t_stack	*b,
			t_stack	cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rr(b, a);
	stack_size(*a);
	median_id(*a);
	stack_size(*b);
	median_id(*b);
}

void	rev_rotate_both(t_stack	*a,
			t_stack	*b,
			t_stack	cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rrr(b, a);
	stack_size(*a);
	median_id(*a);
	stack_size(*b);
	median_id(*b);
}

void	pre_for_push(t_stack	*pile, t_stack	top_node, char stack_node)
{
	while (*pile != top_node)
	{
		if (stack_node == 'a')
		{
			if (top_node->median)
				ra(pile);
			else
				rra(pile);
		}
		else if (stack_node == 'b')
		{
			if (top_node->median)
				rb(pile);
			else
				rrb(pile);
		}
	}
}

void	move_a_to_b(t_stack	*a, t_stack	*b)
{
	t_element_stack	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->median
		&& cheapest_node->target_node->median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->median)
		&& !(cheapest_node->target_node->median))
		rev_rotate_both(a, b, cheapest_node);
	pre_for_push(a, cheapest_node, 'a');
	pre_for_push(b, cheapest_node->target_node, 'b');
	pb(b, a);
}
