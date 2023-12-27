/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:56:16 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:15:24 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <limits.h>
# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"

typedef enum e_bool
{
	FALSE,
	TRUE
}t_bool;

typedef struct s_stack
{
	int				data;
	int				index;
	int				push_cost;
	int				index_min;
	t_bool			min;
	t_bool			median;
	t_bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
}t_element_stack,*t_stack;

int		stack_size(t_stack	lst);
void	clear_dbs(t_stack	*a, t_stack	*b);
void	init_dbs(t_stack	*a, t_stack	*b);
void	print_stack(t_stack	lst);
void	push_s(t_stack	*lst, int ac, char	**av);
t_stack	init_stack(void);
t_stack	clear_stack(t_stack	lst);
t_stack	push_stack(t_stack	lst, int x);
t_stack	pop_stack(t_stack	lst);
t_bool	is_empty_stack(t_stack	lst);

#endif
