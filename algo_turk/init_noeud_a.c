/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_noeud_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:00 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 21:57:33 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_node_a(t_element_stack	*a, t_element_stack	*b)
{
	stack_size(a);
	median_id(a);
	stack_size(b);
	median_id(b);
	set_target_noeud(a, b);
	cost_analysis(a, b);
	set_cheapest(a);
}
