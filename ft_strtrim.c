/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 07:22:23 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/06 13:53:12 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	front;
	size_t	back;
	size_t	count;

	if (!s1)
		return (NULL);
	s2 = 0;
	front = 0;
	count = 0;
	back = ft_strlen(s1);
	if (s1 && set)
	{
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[back - 1] && back > front && ft_strchr(set, s1[back - 1]))
			back--;
		s2 = (char *)malloc(sizeof(char) * ((back - front) + 1));
		if (!s2)
			return (NULL);
		while (back > front)
			s2[count++] = s1[front++];
		s2[count] = '\0';
	}
	return (s2);
}
