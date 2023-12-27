/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:46 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:42:44 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	a;
	t_stack	b;

	init_dbs(&a, &b);
	if (ac <= 1)
		return (0);
	if (parsing(ac, av, &a))
	{
		a = reverse(a);
		if (!stack_sort(a))
		{
			if (stack_size(a) == 2)
				sa(a);
			else if (stack_size(a) == 3)
				sort_three_a(&a);
			else if (stack_size(a) < 30)
				a = sort_five(&a, &b);
			else if (stack_size(a) > 3)
				sort_turk(&a, &b);
		}
	}
	a = clear_stack(a);
	return (EXIT_SUCCESS);
}
