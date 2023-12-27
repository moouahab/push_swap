/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:05:22 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 09:14:33 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/parsing.h"
#include <limits.h>

t_bool	is_present(char s, char c)
{
	if (s == c)
		return (TRUE);
	return (FALSE);
}

t_bool	is_not_valide(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			return (TRUE);
		if ((str[i] == '-' && !ft_isdigit(str[i + 1]))
			|| (str[i] == '+' && !ft_isdigit(str[i + 1])))
			return (TRUE);
		if ((i != 0)
			&& ((str[i] == '-' && ft_isdigit(str[i - 1]))
				|| (str[i] == '+' && ft_isdigit(str[i - 1]))
			))
			return (TRUE);
		i++;
	}
	return (FALSE);
}

t_bool	is_space(char *str)
{
	while (*str)
	{
		if ((*str < 14 && *str > 8) || *str == 32)
			return (TRUE);
		str++;
	}
	return (FALSE);
}

t_bool	parse_interger_av(char	**str, t_stack	*result)
{
	int	i;

	i = 0;
	str++;
	while (str[i])
	{
		if (!is_tab_valid(str)
			|| INT_MAX < atol(str[i])
			|| INT_MIN > atol(str[i]))
			return (FALSE);
		*result = push_stack(*result, ft_atoi(str[i]));
		i++;
	}
	return (TRUE);
}

t_bool	parse_interger_split(char	**str, t_stack	*res)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_tab_valid(str)
			|| INT_MAX < atol(str[i])
			|| INT_MIN > atol(str[i]))
			return (FALSE);
		*res = push_stack(*res, ft_atoi(str[i]));
		i++;
	}
	return (TRUE);
}
