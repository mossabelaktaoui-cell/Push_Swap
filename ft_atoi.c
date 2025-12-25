/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:03:38 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/12/25 21:28:45 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *number)
{
	int		i;
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	i = 0;
	if (number[i] == '-' || number[i] == '+')
	{
		if (number[i] == '-')
			sign = -1;
		i++;
	}
	while (number[i] >= '0' && number[i] <= '9')
	{
		result = (result * 10) + (number[i] - '0');
		if (result > 2147483647 || (result > 2147483648 && number[0] == '-'))
			return (ERROR_NUM);
		i++;
	}
	result *= sign;
	if (result > 2147483647 || result < -2147483648)
			return (ERROR_NUM);
	return (result);
}
