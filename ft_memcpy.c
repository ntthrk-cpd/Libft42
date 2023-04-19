/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 06:29:05 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 00:25:52 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*char_dest++ = *char_src++;
	return (dest);
}
