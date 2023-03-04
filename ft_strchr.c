/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:36:41 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:56:47 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (c > 127)
		c -= 128;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)(str + index));
		index++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
