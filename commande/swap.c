/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:00:17 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 21:20:05 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/commande.h"

void	swap(t_stack	a)
{
	int	tmp;

	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	stack_size(a);
}

void	sa(t_stack	a)
{
	if (stack_size(a) > 1)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void	sb(t_stack	a)
{
	if (stack_size(a) > 1)
	{
		swap(a);
		ft_printf("sb\n");
	}
}

void	ss(t_stack	a, t_stack	b)
{
	if (stack_size(a) > 1)
	{
		swap(a);
		swap(b);
		ft_printf("ss\n");
	}
}
