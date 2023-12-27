/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:59:50 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 10:59:03 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	rrotate(t_stack	*stack)
{
	t_stack	tmp;
	t_stack	current;

	tmp = init_stack();
	current = init_stack();
	if (is_empty_stack(*stack) || stack_size(*stack) == 1)
		return (FALSE);
	current = *stack;
	while (current->next->next != NULL && !is_empty_stack(current))
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	stack_size(*stack);
	return (TRUE);
}

void	rra(t_stack	*a)
{
	if (rrotate(a))
		ft_printf("rra\n");
}

void	rrb(t_stack	*b)
{
	if (rrotate(b))
		ft_printf("rrb\n");
}

void	rrr(t_stack	*a, t_stack	*b)
{
	if (rrotate(a) && rrotate(b))
		ft_printf("rrr\n");
}

/*
int     main(int ac, char       **av)
{
        t_stack a;

        a = init_stack();
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
                rra(&a);
                ft_printf("\napres rotation a\n");
                print_stack(a);
        }
        a = clear_stack(a);
        return (0);
}*/
