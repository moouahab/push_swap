/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:47:41 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/13 23:47:35 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"
#include "../include/push_swap.h"

t_stack	init_stack(void)
{
	return (NULL);
}

/************************************************/

t_bool	is_empty_stack(t_stack	lst)
{
	if (lst == NULL)
		return (TRUE);
	return (FALSE);
}

/************************************************/

t_stack	push_stack(t_stack	lst, int x)
{
	t_element_stack	*new_element;

	new_element = malloc(sizeof(*new_element));
	if (new_element == NULL)
	{
		ft_printf("ERROR : allocation dynamique de new_stack\n");
		return (init_stack());
	}
	new_element->data = x;
	new_element->next = lst;
	return (new_element);
}

/***********************************************/

t_stack	clear_stack(t_stack	lst)
{
	while (!is_empty_stack(lst))
		lst = pop_stack(lst);
	return (init_stack());
}

/**********************************************/

void	print_stack(t_stack	lst)
{
	if (is_empty_stack(lst))
	{
		ft_printf("\nAFFICHAGE IMPOSSIBLE\n");
		return ;
	}
	while (!is_empty_stack(lst))
	{
		ft_printf("\nlst[%d]-> %d\n", lst->index, lst->data);
		lst = lst->next;
	}
}
