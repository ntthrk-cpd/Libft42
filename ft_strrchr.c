/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:32:14 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/18 23:20:21 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + index);
	while (index > -1)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)str + index);
		index--;
	}
	return (NULL);
}
