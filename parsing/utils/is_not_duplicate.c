/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_not_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:56:17 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/05 16:03:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/parsing.h"

t_bool	is_not_duplicate(t_stack	*tab)
{
	t_stack	current;
	t_stack	runner;

	current = *tab;
	while (!is_empty_stack(current))
	{
		runner = current->next;
		while (!is_empty_stack(runner))
		{
			if (runner->data == current->data)
				return (FALSE);
			runner = runner->next;
		}
		current = current->next;
	}
	return (TRUE);
}
