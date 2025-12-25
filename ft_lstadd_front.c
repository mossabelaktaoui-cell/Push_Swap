/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:09:56 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 11:37:13 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/* 
int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	node1 = malloc(sizeof(t_list));
	head = node1;
	node1 -> content = '5';
	node1 -> next = NULL;
	node2 = malloc(sizeof(t_list));
	node2 -> content = '6';
	node2 -> next = NULL;

	ft_lstadd_front(&head, node2);
	
} */
