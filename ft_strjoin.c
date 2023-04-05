/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:21:18 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/05 15:27:38 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str_join = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str_join)
		return (NULL);
	ft_memcpy((void *)str_join, (void *)s1, len_s1);
	ft_memcpy((void *)str_join + len_s1, (void *)s2, len_s2);
	str_join[len_s1 + len_s2] = '\0';
	return (str_join);
}
