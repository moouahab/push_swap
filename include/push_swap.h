/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:53:34 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:17:52 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"
# include "parsing.h"
# include "stack.h"
# include "commande.h"

void			is_min(t_stack	pile);
t_stack			sort_five(t_stack	*a, t_stack	*b);
t_element_stack	*find_min_ft(t_element_stack	*node);
void			pre_for_push(t_stack	*pile, t_stack	top_node, char stack_n);
void			init_node_b(t_stack	a, t_stack	b);
void			move_a_to_b(t_stack	*a, t_stack	*b);
void			sort_turk(t_stack	*a, t_stack	*b);
void			init_node_a(t_element_stack	*a, t_element_stack	*b);
void			set_cheapest(t_element_stack	*pile);
void			median_id(t_stack	pile);
void			cost_analysis(t_element_stack	*a, t_element_stack	*b);
t_element_stack	*find_max_ft(t_element_stack	*node);
void			set_target_noeud(t_stack	a, t_stack	b);
void			is_top_or_bottom_median(t_element_stack	*a, t_stack	stack);
t_stack			merge_sort(t_stack	head);
void			sort_three_a(t_stack	*pile);
void			sort_three_b(t_stack	*pile);
t_bool			stack_sort(t_stack	pile);
t_element_stack	find_min(t_element_stack	*node);
t_element_stack	find_max(t_element_stack	*node);

#endif
