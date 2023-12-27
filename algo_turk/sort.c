/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:25:20 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 21:40:46 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	stack_sort(t_stack	pile)
{
	if (is_empty_stack(pile))
		return (-1);
	while (pile->next)
	{
		if (pile->data > pile->next->data)
			return (FALSE);
		pile = pile->next;
	}
	return (TRUE);
}

void	sort_three_a(t_stack	*a)
{
	t_element_stack	*max_node;

	max_node = find_max_ft(*a);
	if (*a == max_node)
		ra(a);
	else if ((*a)->next == max_node)
		rra(a);
	if ((*a)->next->data < (*a)->data)
		sa(*a);
}

/**
 * on pousse de noeud de la pile A a la pile B
 * sans verifier quoi que soi
 * 
 * chaque noeud de la liste A besoin d'une cible
 * dans liste B, un noeud cible a une valeur  plus petite
 * que A mais c'est ausi la valeur la plus proche de A 
 * 
 * a chaque pousser de la pile A vers la pile B , nous devont trie 
 * en meme temp par orde decroisant 
 *
 *  a chaque pousser de la pile A vers B nous devont 
 *  nous assure que la valeur de A > valeur de B
 *
 *  si a pas de valeur inferieur noeud A alors 
 *  Bmax sera la valeur cible du noed
 *
 *  maintenant que chaque noeud etait afecter a une cible 
 *  il faut calculer le cout le moin cher de pour push de A a B
 *
 *  cout_min = (a->index - size_stack(a)) + a->target_node;
 *
 *
 * */

void	move_b_to_a(t_stack	*a, t_stack	*b)
{
	pre_for_push(a, (*b)->target_node, 'a');
	pa(b, a);
}

void	min_on_top(t_stack	*a)
{
	while ((*a)->data != find_min_ft(*a)->data)
	{
		if (find_min_ft(*a)->median)
			ra(a);
		else
			rra(a);
	}
}

void	sort_turk(t_stack	*a, t_stack	*b)
{
	int	len;

	len = stack_size(*a);
	if (len-- > 3 && !stack_sort(*a))
		pb(b, a);
	if (len-- > 3 && !stack_sort(*a))
		pb(b, a);
	while (len-- > 3 && !stack_sort(*a))
	{
		init_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three_a(a);
	while (*b)
	{
		init_node_b(*a, *b);
		move_b_to_a(a, b);
	}
	stack_size(*a);
	median_id(*a);
	min_on_top(a);
}
