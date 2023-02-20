/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:14:51 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/20 16:59:05 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size_ch;
	int		count;

	count = 0;
	size_ch = ft_strlen(s1);
	s2 = (char *)malloc(size_ch);
	if (!s2)
		return (NULL);
	while (s1[count] != '\0')
	{
		s2[count] = s1[count];
		count++;
	}
	return (s2);
}
