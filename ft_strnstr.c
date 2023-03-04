/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:49:00 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:42:59 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count_i;
	size_t	count_j;

	count_i = 0;
	count_j = 0;
	if (*needle)
	{
		while (count_i < len && haystack[count_i] != '\0')
		{
			while (haystack[count_i + count_j] == needle[count_j]
				&& needle[count_j] != '\0'
				&& (count_i + count_j) < len)
			{
				if (needle[count_j + 1] == '\0')
					return ((char *)haystack + count_i);
				count_j++;
			}
			count_j = 0;
			count_i++;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
