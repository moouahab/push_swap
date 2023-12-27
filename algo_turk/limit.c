/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:17:15 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 13:32:49 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <limits.h>

t_element_stack	find_max(t_element_stack	*node)
{
	long			max;
	t_element_stack	max_element;

	max_element.data = 0;
	if (is_empty_stack(node))
		return (max_element);
	max = LONG_MIN;
	while (node)
	{
		if (node->data > max)
		{
			max = node->data;
			max_element = *node;
		}
		node = node->next;
	}
	return (max_element);
}

t_element_stack	*find_max_ft(t_element_stack	*node)
{
	long			max;
	t_element_stack	*max_element;

	if (is_empty_stack(node))
		return (init_stack());
	max = LONG_MIN;
	max_element = node;
	while (node)
	{
		if (node->data > max)
		{
			max = node->data;
			max_element = node;
		}
		node = node->next;
	}
	return (max_element);
}

t_element_stack	*find_min_ft(t_element_stack	*node)
{
	long			min;
	t_element_stack	*min_el;

	if (is_empty_stack(node))
		return (init_stack());
	min = LONG_MAX;
	min_el = node;
	while (node)
	{
		if (node->data < min)
		{
			min = node->data;
			min_el = node;
		}
		node = node->next;
	}
	return (min_el);
}

t_element_stack	find_min(t_element_stack	*node)
{
	long			min;
	t_element_stack	min_el;

	min_el.data = 0;
	if (is_empty_stack(node))
		return (min_el);
	min = LONG_MAX;
	while (node)
	{
		if (node->data < min)
		{
			min = node->data;
			min_el = *node;
		}
		node = node->next;
	}
	return (min_el);
}
