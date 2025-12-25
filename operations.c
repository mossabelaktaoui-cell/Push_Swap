/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:40:21 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 21:15:13 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(s_node **stack_a, int print)
{
	s_node	*first;
	s_node	*second;

	if (*stack_a && (*stack_a)->next)
        {
		first = *stack_a;
		second = (*stack_a)->next;
		first->next = second->next;
		second->next = first;
		*stack_a = second;
		if (print)
			write(1, "sa\n", 3);
	}
}

void sb(s_node **stack_b, int print)
{
	s_node	*first;
	s_node	*second;

	if (*stack_b && (*stack_b)->next)
	{
		first = *stack_b;
		second = (*stack_b)->next;
		first->next = second->next;
		second->next = first;
		*stack_b = second;
		if (print)
			write(1, "sb\n", 3);
	}
}

void	ss(s_node **stack_a, s_node **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if ((*stack_a && (*stack_a)->next) && (*stack_b && (*stack_b)->next))
		write(1, "ss\n", 3);	
}

void	pa(s_node **stack_a, s_node **stack_b)
{
	s_node	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b) -> next;
		tmp -> next = *stack_a;
		*stack_a = tmp;
		write(1, "pa\n", 3);
	}
}

void	pb(s_node **stack_a, s_node **stack_b)
{
	s_node	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a) -> next;
		tmp -> next = *stack_b;
		*stack_b = tmp;
		write(1, "pb\n", 3);
	}
}

void	ra(s_node **stack_a, int print)
{
	s_node	*tmp;
	s_node	*curr;

	if (*stack_a && (*stack_a) -> next)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a) -> next;
		curr = *stack_a;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = tmp;
		tmp -> next = NULL;
		if (print)
			write(1, "ra\n", 3);
	}
}

void	rb(s_node **stack_b, int print)
{
	s_node	*tmp;
	s_node	*curr;

	if (*stack_b && (*stack_b) -> next)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b) -> next;
		curr = *stack_b;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = tmp;
		tmp -> next = NULL;
		if (print)
			write(1, "rb\n", 3);
	}
}

void	rr(s_node **stack_a, s_node **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if ((*stack_a && (*stack_a) -> next) || (*stack_b && (*stack_b) -> next))
		write(1, "rr\n", 3);
}

void	rra(s_node **stack_a, int print)
{
	s_node	*tmp;
	s_node	*curr;

	if (*stack_a && (*stack_a) -> next)
	{
		curr = *stack_a;
		while (curr -> next -> next != NULL)
			curr = curr -> next;
		curr -> next -> next = *stack_a;
		*stack_a = curr -> next;
		curr -> next = NULL;		
		if (print)
			write(1, "rra\n", 4);
	}
}

void	rrb(s_node **stack_b, int print)
{
	s_node	*tmp;
	s_node	*curr;

	if (*stack_b && (*stack_b) -> next)
	{
		curr = *stack_b;
		while (curr -> next -> next != NULL)
			curr = curr -> next;
		curr -> next -> next = *stack_b;
		*stack_b = curr -> next;
		curr -> next = NULL;		
		if (print)
			write(1, "rrb\n", 4);
	}
}

void	rrr(s_node **stack_a, s_node **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if ((*stack_a && (*stack_a) -> next) || (*stack_b && (*stack_b) -> next))
		write(1, "rrr\n", 4);
}