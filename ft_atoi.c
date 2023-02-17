/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:28:39 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/17 21:15:25 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	negative;
	int	result;

	negative = 1;
	result = 0;
	while ((*nptr >= 9 && *nptr <= 13)
		|| *nptr == 32)
		*nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			negative = -1;
		*nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
		result = (*nptr++ - '0') + (result * 10);
	return (result * negative);
}
