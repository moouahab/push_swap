/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:48:22 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 13:36:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../include/push_swap.h"

t_stack	pop_stack(t_stack lst)
{
	t_element_stack	*el;

	if (is_empty_stack(lst))
		return (init_stack());
	el = lst->next;
	free(lst);
	return (el);
}

/***************************************************/

int	stack_size(t_stack	lst)
{
	int	len;

	len = 0;
	while (!is_empty_stack(lst))
	{
		lst->index = len++;
		lst = lst->next;
	}
	return (len);
}

/***************************************************/

void	init_dbs(t_stack	*a, t_stack	*b)
{
	*a = init_stack();
	*b = init_stack();
}

/*****************************************************/

void	clear_dbs(t_stack	*a, t_stack	*b)
{
	*a = clear_stack(*a);
	*b = clear_stack(*b);
}
