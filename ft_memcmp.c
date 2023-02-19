/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:20:48 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/19 20:57:39 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_check_boo(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else 
		return (0);
}

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_ch;
	unsigned char	*str2_ch;

	str1_ch = (unsigned char *)str1;
	str2_ch	= (unsigned char *)str2; 
	if (!n)
		return (0);
	while(--n && *str1_ch == *str2_ch)
	{
		str1_ch++;
		str2_ch++;
	}
	return (ft_check_boo((int)(*str1_ch - *str2_ch))); 
}
