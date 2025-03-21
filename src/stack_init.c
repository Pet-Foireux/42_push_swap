/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:34:43 by mpapin            #+#    #+#             */
/*   Updated: 2025/02/20 02:25:15 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack(t_stack_node **a, char **argv, int argv_splited)
{
	long	nbr;

	(void) argv_splited;
	while (*argv)
	{
		if (!check_digit(*argv))
			return_with_error(a);
		nbr = ft_atoi(*argv);
		if (nbr >= INT_MAX || nbr <= INT_MIN)
			return_with_error(a);
		if (check_repetition(*a, (int) nbr))
			return_with_error(a);
		append_node(a, nbr);
		argv++;
	}
}

void	init_nodes(t_stack_node *a, t_stack_node *b)
{
	set_current_pos(a);
	set_current_pos(b);
	set_target(a, b);
	set_price(a, b);
	set_cheapest(b);
}
