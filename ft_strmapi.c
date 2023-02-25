/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:13:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/25 20:12:47 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	len = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char *) * len);
	if (!s || !f || !str)
		return (NULL);
	while (index < len)
		str[index++] = f(i, s[index]);
	return (str);
}
