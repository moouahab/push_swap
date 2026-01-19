# Revue de code (rapport généré)

- Extraits disponibles : 25
- Fonctions détectées  : 0
- Signalements pratiques : 0

## Fonctions indexées
Aucune fonction détectée.

## Logique / extrait par fichier
### main.c
```
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
			els
```
### stack/stack_utils2.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:48:22 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 13:36:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../include/push_swap.h"

t_stack	pop_stack(t_stack lst)
{
	t_element_stack	*el;

	if (is_empty_stack(lst))
		return (init_stack());
	el = lst->next;
	free(lst);
	return (el);
}

/***************************************************/

int	stack_size(t_stack	lst
```
### stack/stack_utils.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:47:41 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/13 23:47:35 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"
#include "../include/push_swap.h"

t_stack	init_stack(void)
{
	return (NULL);
}

/************************************************/

t_bool	is_empty_stack(t_stack	lst)
{
	if (lst == NULL)
		return (TRUE);
	return (FALSE);
}

/*************
```
### stack/push_s.c
```
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
```
### split/split_utils.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:48:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 08:48:45 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

t_bool	is_sp(char str)
{
	if ((str < 14 && str > 8) || str == 32)
		return (TRUE);
	return (FALSE);
}

int	count_word(char	*str)
{
	int	inside_word;
	int	count;

	count = 0;
	inside_word = 0;
	while (*str)
	{
		if (is_sp(*str))
			inside_word = 0;
		else if (!inside_word)
```
### split/split.c
```
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
			i
```
### commande/rotate.c
```
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
```
### commande/push.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:57:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 09:00:16 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	push_a_to_b(t_stack	*pile1, t_stack	*pile2)
{
	int	value;

	if (is_empty_stack(*pile1))
		return (FALSE);
	value = (*pile1)->data;
	*pile1 = pop_stack(*pile1);
	*pile2 = push_stack(*pile2, value);
	stack_size(*pile1);
	stack_size(*pile2);
	return (TRUE);
}

void	pb(
```
### commande/swap.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:00:17 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/12 21:20:05 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/commande.h"

void	swap(t_stack	a)
{
	int	tmp;

	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	stack_size(a);
}

void	sa(t_stack	a)
{
	if (stack_size(a) > 1)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void	sb(t_stack	a)
{
	if (stack_size(a) > 1)
	{
		swap(a);
		ft_printf(
```
### commande/rrotate.c
```
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
		c
```
### ft_printf/fonction/ft_putnbr_unsigned.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:32:34 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	int				len;
	unsigned int	max_value;

	len = 0;
	max_value = (unsigned int)(0);
	if (nb < max_value)
		nb = 4294967295 - nb;
	else if (nb < 10)
		len += ft_printchar_fd(nb + 48, fd);
	else if (nb > 9)
	{
		len += ft_put
```
### ft_printf/fonction/ft_printchar.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:09:01 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
```
### ft_printf/fonction/ft_putnbr_base.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:31:19 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_check_sign(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			return (0);
		str++;
	}
	return (1);
}

static int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (i == j)
			{
```
### ft_printf/fonction/ft_print_ptr.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 03:19:23 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_puthaxell(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr >= 16 || nbr == 0)
		count += ft_puthaxell(nbr / 16);
	count += write(1, &"0123456789abcdef"[nbr % 16], 1);
	return (count);
}

int	ft_print_ptr(void	*ptr)
{
	int				count;
	unsigned long	adrss;
```
### ft_printf/fonction/ft_printstr.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:06:56 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printstr_fd(char	*str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		i += write(1, "(null)", 6);
	else
	{
		while (str[i])
			ft_printchar_fd(str[i++], fd);
	}
	return (i);
}
```
### ft_printf/fonction/ft_printnbr.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:19:56 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 22:41:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_count_digit(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit += 1;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

int	ft_printnbr_fd(int nb, int fd)
{
	int	len;

	len = ft_count_digit(nb);
	if (nb == -2147483648)
	{
		ft_printstr_fd("-214748
```
### ft_printf/src/ft_printf.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:47:48 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/22 11:11:38 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
* @param *format 	: 	pointeur de formatage
* @param ... 		: 	une ellipse indiquant que des arguments 
* 				supplémentaires peuvent être transmis
*
* @return		:	taill de la chaine de formatage
* @detail 		:	recode un printf
*
* [LIB STDARG]
*
* va_list		:	c'est surctur
```
### algo_turk/target.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:23 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:24 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_target_noeud(t_element_stack	*a, t_element_stack	*b)
{
	t_element_stack	*current_b;
	t_element_stack	*target_node;
	long			best_index;

	while (a)
	{
		best_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->data < a->data
				&& current_
```
### algo_turk/median.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:10 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:11 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	median_id(t_stack	pile)
{
	t_stack	currant;

	currant = pile;
	while (currant != NULL)
	{
		is_top_or_bottom_median(currant, pile);
		currant = currant->next;
	}
}

void	is_top_or_bottom_median(t_element_stack	*a, t_stack	stack)
{
	int	size;

	size = stack_size(stack)
```
### algo_turk/sort.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:25:20 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 21:40:46 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	stack_sort(t_stack	pile)
{
	if (is_empty_stack(pile))
		return (-1);
	while (pile->next)
	{
		if (pile->data > pile->next->data)
			return (FALSE);
		pile = pile->next;
	}
	return (TRUE);
}

void	sort_three_a(t_stack	*a)
{
	t_element_stack	*max_node;

	max_node = fi
```
### algo_turk/init_noeud_b.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_noeud_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:05 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 18:20:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_target_noeud_b(t_element_stack	*a, t_element_stack	*b)
{
	t_element_stack	*current_a;
	t_element_stack	*target_node;
	long			best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->data > b->data
				&& curren
```
### algo_turk/limit.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:17:15 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/14 13:32:49 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <limits.h>

t_element_stack	find_max(t_element_stack	*node)
{
	long			max;
	t_element_stack	max_element;

	max_element.data = 0;
	if (is_empty_stack(node))
		return (max_element);
	max = LONG_MIN;
	while (node)
	{
		if (node->data > max)
		{
			max = node->data;
```
### algo_turk/init_noeud_a.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_noeud_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:00 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 21:57:33 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_node_a(t_element_stack	*a, t_element_stack	*b)
{
	stack_size(a);
	median_id(a);
	stack_size(b);
	median_id(b);
	set_target_noeud(a, b);
	cost_analysis(a, b);
	set_cheapest(a);
}
```
### algo_turk/set_cheapest.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:17 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/26 01:20:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_cheapest(t_element_stack	*pile)
{
	long			cheapest_value;
	t_element_stack	*cheapest_node;

	cheapest_node = NULL;
	if (is_empty_stack(pile))
		return ;
	cheapest_value = LONG_MAX;
	while (pile)
	{
		if (pile->push_cost < cheapest_value)
		{
			cheapest_value = pi
```
### algo_turk/move_a_to_b.c
```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:20:13 by moouahab          #+#    #+#             */
/*   Updated: 2023/12/25 22:49:51 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	get_cheapest(t_stack	pile)
{
	if (!pile)
		return (NULL);
	set_cheapest(pile);
	while (pile)
	{
		if (pile->cheapest)
			return (pile);
		pile = pile->next;
	}
	return (NULL);
}

void	rotate_both(t_stack	*a,
			t_stack	*b,
			t_stack	cheapest_node)
{
	while (*b !=
```

## Signalements (best practices / redondance)
Aucun signalement.

> Rapport généré automatiquement par l’agent revue (limité aux extraits scannés).