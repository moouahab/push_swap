/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:10 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:11 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	median_id(t_stack	pile)
{
	t_stack	currant;

	currant = pile;
	while (currant != NULL)
	{
		is_top_or_bottom_median(currant, pile);
		currant = currant->next;
	}
}

void	is_top_or_bottom_median(t_element_stack	*a, t_stack	stack)
{
	int	size;

	size = stack_size(stack);
	if (a->index < size / 2)
		a->median = TRUE;
	else
		a->median = FALSE;
}
