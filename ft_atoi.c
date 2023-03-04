/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:28:39 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:18:45 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	negative;
	int	result;
	int	count;

	negative = 1;
	result = 0;
	count = 0;
	while ((nptr[count] >= 9 && nptr[count] <= 13)
		|| nptr[count] == 32)
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			negative = -1;
		count++;
	}
	while (nptr[count] >= 48 && nptr[count] <= 57)
		result = (nptr[count++] - '0') + (result * 10);
	return (result * negative);
}
