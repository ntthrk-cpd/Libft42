/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:37:18 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/07 18:14:52 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	str_len;
	size_t	count;

	str_len = ft_strlen(src);
	count = 0;
	if (size == 0)
		return (str_len);
	while (src[count] != '\0' && count < (size - 1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (str_len);
}
