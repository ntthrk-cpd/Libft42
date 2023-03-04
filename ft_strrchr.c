/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:32:14 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 19:06:37 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (c > 127)
	{
		c -= 128;
		c++;
	}
	while (str[index] != '\0')
		index++;
	while (str[--index] != c)
	{
		if (str[index] == c)
			return ((char *)(str + index));
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
