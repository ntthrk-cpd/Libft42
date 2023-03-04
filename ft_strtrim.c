/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:50:12 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*set_back(char *s)
{
	int	count;

	count = ft_strlen(s);
	while (s[count] == '\t' || s[count] == '\n' || s[count] == ' ')
		s[count--] = '\0';
	return (s);
}

char	*set_front(char *s)
{
	int	count;

	count = 0;
	while (s[count] == '\t' || s[count] == '\n' || s[count] == ' ')
		count++;
	return (s + count);
}

char	*remove_char(char *s, char *set)
{
	int		count;
	int		pos;
	char	*str_new;

	count = 0;
	pos = 0;
	str_new = ft_strdup(s);
	if (*set)
	{
		while (s[pos] != '\0')
		{
			if (s[pos] != set[0])
				str_new[count++] = s[pos];
			pos++;
		}
		if (count > 0)
			str_new[count] = '\0';
		if (*++set)
			remove_char((char *)str_new, (char *)set);
	}
	return (str_new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	str_trim = (char *)malloc(len_s1);
	if (!*str_trim)
	{
		str_trim = set_front((char *)s1);
		str_trim = set_back(str_trim);
		str_trim = remove_char(str_trim, (char *)set);
		return (str_trim);
	}
	return (NULL);
}
