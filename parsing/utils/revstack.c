/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:21:45 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:21:46 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/commande.h"

t_stack	reverse(t_stack	a)
{
	t_stack	reverse;
	t_stack	tmp;

	reverse = NULL;
	while (a != NULL)
	{
		tmp = a;
		a = a->next;
		tmp->next = reverse;
		reverse = tmp;
	}
	return (reverse);
}
