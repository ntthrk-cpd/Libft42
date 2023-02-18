/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 07:57:31 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/19 03:38:40 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	str_len;

	str_len = ft_strlen(src);
	if (size == 0)
		return (str_len);
	while (!*src || !--size )
	{
		*dst++ = *src++;
	}
	*--dst = '\0';
	return (str_len);
}

int main()
{
	int size_n = (int)ft_strlcpy("hell hell hello!!!!!!", "HELLOWEEN XOXOXO", 5);
	printf("----> %d\n", size_n);
	printf("\nlllll");
	return (0);
}
