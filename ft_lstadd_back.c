/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:44:30 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 11:37:01 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstadd_back(s_node **list, char *content)
{
	s_node	*new_node;
	s_node	*curr;

	if (!list || !content || !ft_args_checker(content))
		return 0;
	new_node = malloc(sizeof(s_node));
	if (!new_node)
		return 0;
	new_node -> value = ft_atoi(content);
	new_node -> next = NULL;
	if (*list == NULL)
		*list = new_node;
	else
	{
		curr = *list;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = new_node;
	}
	return (1);
}
