/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:20:48 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 22:32:04 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_ch;
	const unsigned char	*str2_ch;

	str1_ch = str1;
	str2_ch = str2;
	if (n <= 0)
		return (0);
	while (n--)
	{
		if (*str1_ch++ != *str2_ch++)
			return ((int)(*--str1_ch - *--str2_ch));
	}
	return (0);
}
