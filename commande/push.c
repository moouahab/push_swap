/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:57:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 09:00:16 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	push_a_to_b(t_stack	*pile1, t_stack	*pile2)
{
	int	value;

	if (is_empty_stack(*pile1))
		return (FALSE);
	value = (*pile1)->data;
	*pile1 = pop_stack(*pile1);
	*pile2 = push_stack(*pile2, value);
	stack_size(*pile1);
	stack_size(*pile2);
	return (TRUE);
}

void	pb(t_stack	*b, t_stack	*a)
{
	if (push_a_to_b(a, b))
		ft_printf("pb\n");
}

void	pa(t_stack	*b, t_stack	*a)
{
	if (push_a_to_b(b, a))
		ft_printf("pa\n");
}

/*
int	main(int ac, char	**av)
{
	t_stack	a;
	t_stack b;

	a = init_stack();
	b = init_stack();
	if (ac > 1)
	{
		parsing(ac, av, &a);
		if (is_empty_stack(a))
		{
			ft_printf("la stack est vide\n");
			return 0;
		}
		ft_printf("\nINISATIALISATION\n");
		print_stack(a);
		pb(&a, &b);
		ft_printf("\npile a\n");
		print_stack(a);
		ft_printf("\npile b\n");
		print_stack(b);
	}
	a = clear_stack(a);
	b = clear_stack(b);
	return (0);
}*/
