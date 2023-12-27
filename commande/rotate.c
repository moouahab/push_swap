/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:59:19 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 10:57:00 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	rotate(t_stack	*stack)
{
	t_stack	tmp;
	t_stack	current;

	tmp = init_stack();
	current = init_stack();
	if (is_empty_stack(*stack) || stack_size(*stack) == 1)
		return (FALSE);
	tmp = *stack;
	*stack = tmp->next;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	stack_size(*stack);
	return (TRUE);
}

void	ra(t_stack	*a)
{
	if (rotate(a))
		ft_printf("ra\n");
}

void	rb(t_stack	*b)
{
	if (rotate(b))
		ft_printf("rb\n");
}

void	rr(t_stack	*a, t_stack	*b)
{
	if (rotate(a) && rotate(b))
		ft_printf("rr\n");
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
                ra(&a);
                ft_printf("\napres rotation a\n");
                print_stack(a);
        }
        a = clear_stack(a);
        return (0);
}*/
