/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:15:41 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 12:54:55 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_node	*fill_linked_list(char **argv, int argc)
{
	s_node	*head;
	int	i;

	if (!argv || argc <= 1)
        	return (NULL);
	i = 1;
	head = NULL;
	while (i < argc)
	{
		if (!ft_lstadd_back(&head, argv[i]))
			return (NULL);
		i++;
	}
	return (head);
}
void	ft_errors_print(void)
{
	write(3, "Error", 5);
	write(1, "Error", 5);
}
int	main(int argc, char **argv)
{
	s_node	*head;

	head = fill_linked_list(argv, argc);
	if (!head)
		return (ft_errors_print(), 0);
	
}