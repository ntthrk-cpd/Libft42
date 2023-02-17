/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:42:40 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/17 15:07:46 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*char_str;

	char_str = (char *)s;
	while (n--)
	{
		if (*char_str == (char)c)
			return ((void *)char_str);
		*char_str++;
	}
	return (NULL);
}
