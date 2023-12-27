/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:51:29 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 08:52:37 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDE_H
# define COMMANDE_H

# include "stack.h"
# include "parsing.h"
# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"

void	swap(t_stack	a);
void	sa(t_stack	a);
void	sb(t_stack	a);
void	ra(t_stack	*a);
void	rb(t_stack	*b);
void	rra(t_stack	*a);
void	rrb(t_stack	*b);
void	rrr(t_stack	*a, t_stack	*b);
void	rr(t_stack	*a, t_stack	*b);
void	ss(t_stack	a, t_stack	b);
void	pb(t_stack	*b, t_stack	*a);
void	pa(t_stack	*b, t_stack	*a);
t_bool	rotate(t_stack	*stack);
t_bool	rrotate(t_stack *stack);
t_bool	push_a_to_b(t_stack	*pile1, t_stack *pile2);
t_stack	reverse(t_stack	a);

#endif
