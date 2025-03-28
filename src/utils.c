/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:35:29 by mpapin            #+#    #+#             */
/*   Updated: 2025/03/24 17:07:25 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(char *s)
{
	if (!s || *s == '\0')
		return (0);
	if (*s == '-')
		s++;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

int	check_repetition(t_stack_node *node, int nbr)
{
	if (node == NULL)
		return (0);
	while (node)
	{
		if (node->value == nbr)
			return (1);
		node = node->next;
	}
	return (0);
}

void	return_with_error(t_stack_node **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		(*stack) = tmp;
	}
}

int	is_sorted(t_stack_node *stack)
{
	if (stack == NULL)
		return (10);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
