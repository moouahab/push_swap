/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:07:24 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 08:58:51 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/parsing.h"

t_bool	init_stack_split(char	**sp, char	**av, t_stack	*pile)
{
	sp = split(av[1]);
	if (!controll_split(sp, pile))
		return (free_tab(sp), FALSE);
	free_tab(sp);
	return (TRUE);
}

t_bool	parsing(int ac, char	**av, t_stack	*pile)
{
	char	**splity;

	if (ac == 2)
	{
		splity = NULL;
		if (!init_stack_split(splity, av, pile))
			return (FALSE);
	}
	else if (ac > 2)
	{
		if (!controll_argv(av, pile))
			return (FALSE);
	}
	return (TRUE);
}
