/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:35:12 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/19 16:10:14 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	count = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (count < dstsize && src[count] != '\0')
	{
		dst[dest_len + count] = src[count];
		count++;
	}
	dst[dest_len + count] = '\0';
	if (count < src_len) 
		return (src_len + dstsize);
	else
		return (dest_len + src_len);
}
