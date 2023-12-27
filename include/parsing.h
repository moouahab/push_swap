/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:01:53 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/13 21:59:56 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../libft/libft.h"
# include "../ft_printf/include/ft_printf.h"
# include "stack.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

typedef long int	t_longi;

void	free_tab(char	**strs);
t_bool	parsing_stack(int *tab, t_stack *pile);
t_bool	is_sp(char str);
t_bool	is_valid_integer(char	*str);
t_bool	is_tab_valid(char **tab);
t_bool	is_present(char s, char c);
t_bool	is_not_valide(char *str);
t_bool	is_space(char *str);
t_bool	parse_interger_av(char	**str, t_stack	*result);
t_bool	is_not_duplicate(t_stack	*tab);
t_bool	parsing(int ac, char	**av, t_stack	*pile);
t_bool	parse_interger_split(char	**str, t_stack	*result);
t_longi	atol(const char	*str);
char	*ft_strndup(char *src, size_t	len);
char	**split(char	*str);
int		ft_strcmp(char	*s1, char	*s2);
int		count_word(char	*str);
int		strslen(char	**strs);
int		controll_split(char	**av, t_stack	*tab);
int		controll_argv(char	**av, t_stack	*tab);

#endif
