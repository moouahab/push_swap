/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:18:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:18:41 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	is_yes_or_not(t_element_stack	*a, t_stack	pile);

void	is_min(t_stack	pile)
{
	t_stack	current;

	current = pile;
	while (current != NULL)
	{
		is_yes_or_not(current, pile);
		current = current->next;
	}
}

void	is_yes_or_not(t_element_stack	*a, t_stack	pile)
{
	t_stack	min_value;

	min_value = find_min_ft(pile);
	if (a->data == min_value->data)
		a->min = TRUE;
	else
		a->min = FALSE;
}
