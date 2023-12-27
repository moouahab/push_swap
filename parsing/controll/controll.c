/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:57:34 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/05 16:59:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/parsing.h"

t_bool	is_tab_valid(char	**tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		if (!is_valid_integer(tab[i]) || is_space((char *)tab[i]))
			return (FALSE);
		i++;
	}
	i = 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) == 0)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool	is_valid_integer(char	*str)
{
	if (str == NULL || *str == '\0')
		return (0);
	while (*str)
	{
		if ((*str < 14 && *str > 8) || *str == 32)
		{
			str++;
			continue ;
		}
		if (is_not_valide(str)
			|| (*str < 43)
			|| (*str >= 46 && *str < 48)
			|| *str > 57
			|| *str == ',')
			return (FALSE);
		str++;
	}
	return (TRUE);
}
