/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:23:37 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/30 21:23:40 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

static void	ft_spilt_norm(char	**strs, char	*str, char	*start, int in)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (is_sp(*str))
		{
			if (in)
			{
				strs[i++] = ft_strndup(start, str - start);
				in = 0;
			}
			start = str + 1;
		}
		else if (!in)
		{
			start = str;
			in = 1;
		}
		str++;
	}
	if (in)
		strs[i++] = ft_strndup(start, str - start);
	strs[i] = NULL;
}

char	**split(char	*str)
{
	char	*start;
	char	**strs;
	int		inside_word;	

	inside_word = 0;
	if (!str)
		return (NULL);
	strs = malloc((count_word(str) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	start = str;
	ft_spilt_norm(strs, str, start, inside_word);
	return (strs);
}
