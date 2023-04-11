/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 03:16:27 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/11 16:14:54 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getstring(char const *s1, char c, int i)
{
	char	*s2;
	size_t	start;
	size_t	len;

	s2 = 0;
	start = 0;
	while (i-- >= 0)
	{	
		while (s1[start] == c)
			start++;
		while (s1[start] != c && i >= 0)
			start++;
	}
	len = start;
	while (s1[len] != c && s1[len] != '\0')
		len++;
	s2 = (char *)malloc((len - start + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (start < len)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}

static void	*ft_memfree(char **str_list, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{	
		free(str_list[j]);
		j++;
	}
	free(*str_list);
	return (NULL);
}

unsigned int	ft_count_word(char const *s, char c)
{
	unsigned int	count;
	unsigned int	index;
	unsigned int	boolean;

	count = 0;
	index = 0;
	boolean = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && boolean == 0)
		{
			count++;
			boolean = 1;
		}
		else if (s[index] == c)
			boolean = 0;
		index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	int		count_word;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	count_word = ft_count_word(s, c);
	str_list = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!str_list)
		return (NULL);
	while (i < count_word)
	{
		str_list[i] = ft_getstring(s, c, i);
		if (str_list[i] == NULL)
			return (ft_memfree(str_list, i));
		i++;
	}
	str_list[i] = 0;
	return (str_list);
}
