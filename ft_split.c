/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/06 19:00:12 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char *s, char c)
{
	int	count;
	int	index;
	int	boolean;

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
	str_list = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (str_list)
	{
			str_list[pos] = ft_getlist();
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
