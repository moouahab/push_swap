/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:47:59 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 08:48:03 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"

void	push_s(t_stack	*lst, int ac, char	**av )
{
	int	i;

	i = 1;
	while (i < ac)
	{
		*lst = push_stack(*lst, atoi(av[i]));
		i++;
	}
}

/*
int	main(int	ac, char	**av)
{
	t_stack	lst;
	int	i;

	i = 1;
	lst = init_stack();
	
	if (ac > 1)
	{
		push(&lst, ac, av);
	}
	printf("la size de lst est de %d\n", stack_size(lst));
	print_stack(lst);
	lst = pop_stack(lst);
	printf("la size de lst est de %d\n", stack_size(lst));
	printf("\nsup du premier element :P\n");
	print_stack(lst);
	lst = clear_stack(lst);
	return (0);
}*/
