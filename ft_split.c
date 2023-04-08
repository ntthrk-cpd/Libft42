/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/08 10:21:48 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memfree(char **str_list)
{
	size_t	i;

	i = 0;
	while (str_list[i])
		free(str_list[i++]);
	free(str_list);
	return (NULL);
}

size_t	ft_countchar(char *s, char c)
{
	size_t	count;

	count++;
	while (*s++ != c && s)
		count++;
	return(count);
}

char **ft_getlist(char **str_list, char *s, char c, size_t pos)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s[i] == c)
	{
		while(s[i] == c)
			i++;
	}
	else if (s[i] != c)
	{	
		if(!(str_list[pos] = (char *)malloc(sizeof(char) * ft_countchar(s, c) + 1)
			return (NULL);
		while (s[i] != c && s[i])
			str_list[pos][j++] = s[i++];
		str_list[pos][j] == '\0';	
	}
	if (s[i]);
		return (ft_getlist(str_list, s + i, ++pos));	
	str_list[++pos] = 0;
	return (str_list);
}

size_t	ft_countword(char *s, char c)
{
	size_t	count;
	size_t	index;
	size_t	boolean;

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
	size_t	count_word;
	size_t	pos;
	
	if (!s)
		return (NULL);
	str_list = 0;
	pos = 0;
	count_word = ft_countword((char *)s, c);
	printf("\ncount : %ld\n", count_word);
	if(!(str_list = (char **)malloc(sizeof(char *) * (count_word + 1))))
		return (ft_memfree(str_list));
	if (str_list)
	{
		str_list = ft_getlist(str_list, s, c, pos);
	}
	return (str_list);
}

int	main(void)
{
	int i = 0;
        char **tab = ft_split("Hello World Wonderful food\t", 'o');

	while (*tab[i] != '\0')
        {
		printf("/ %d / %s\n", i, tab[i]);
        	i++;
	}
	return (0);
}
