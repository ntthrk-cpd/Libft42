/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:35:12 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/12 16:53:49 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	count = 0;
	src_len = ft_strlen(src);
	if ((!dst && dstsize == 0) || dstsize == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while ((dest_len + count) < (dstsize - 1) && src[count] != '\0')
	{
		dst[dest_len + count] = src[count];
		count++;
	}
	dst[dest_len + count] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char	*dest = 0;

	if (!(dest = (char *)malloc(sizeof(char) * 1)))
		return (0);
	memset(dest, 'r', 15);
	printf( "%ld\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
