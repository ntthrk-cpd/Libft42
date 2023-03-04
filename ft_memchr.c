/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:42:40 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:22:40 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*char_str;
	int		count;

	char_str = (char *)s;
	count = 0;
	while (n--)
	{
		if (char_str[count] == (char)c)
			return ((void *)(char_str + count));
		count++;
	}
	return (NULL);
}
