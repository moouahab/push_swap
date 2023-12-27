/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:07:45 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 14:58:31 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/parsing.h"

int	controll_argv(char	**av, t_stack	*tab)
{
	if (parse_interger_av(av, tab))
	{
		if (is_not_duplicate(tab))
		{
			return (TRUE);
		}
		else
		{
			ft_printf("ERROR\n");
			*tab = clear_stack(*tab);
			return (FALSE);
		}
	}
	else
	{
		ft_printf("ERROR\n");
		*tab = clear_stack(*tab);
		return (FALSE);
	}
	return (TRUE);
}

int	controll_split(char	**av, t_stack	*tab)
{
	if (parse_interger_split(av, tab))
	{
		if (!is_not_duplicate(tab))
		{
			ft_printf("ERROR\n");
			*tab = clear_stack(*tab);
			return (FALSE);
		}
	}
	else
	{
		ft_printf("ERROR\n");
		return (FALSE);
	}
	return (TRUE);
}
