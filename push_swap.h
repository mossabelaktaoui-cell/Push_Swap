/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:00:07 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 12:43:06 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR_NUM 9223372036854775807

typedef struct t_node{
	int	value;
	struct stack	*next;
}	s_node;


void	ft_lstadd_back(s_node **lst, char *content);
int	ft_args_checker(char *arg);
int	ft_atoi(const char *number);




# endif