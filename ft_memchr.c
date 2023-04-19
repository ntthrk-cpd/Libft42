/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:42:40 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 00:22:02 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_str;
	int				count;

	char_str = (unsigned char *)s;
	count = 0;
	while (n--)
	{
		if (char_str[count] == (unsigned char)c)
			return ((void *)(char_str + count));
		count++;
	}
	return (NULL);
}
