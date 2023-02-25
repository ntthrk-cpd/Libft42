/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:32:14 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/25 20:10:12 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	while (c > 127)
	{
		c -= 128;
		c++;
	}
	while (*str)
		*str++;
	*str--;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		*str--;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
