/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:05:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/25 20:07:14 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char	*sub_str;

	count = 0;
	sub_str = (char *)malloc(len);
	if (!*sub_str)
	{
		while (count < len
			&& s[count + start] != '\0')
		{
			sub_str[count] = s[count + start];
			count++;
		}
		sub_str[count] = '\0';
		return ((char *)sub_str);
	}
	return (NULL);
}
