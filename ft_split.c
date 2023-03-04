/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 19:05:24 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **str_list)
{
	int	i;

	i = 0;
	while (str_list[i] != NULL)
	{
		free(str_list[i]);
		i++;
	}
	free(str_list);
}

int	ft_countword(char *s, char c)
{
	int	count;
	int	boolean;
	int	index;

	count = 0;
	index = 0;
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
	int		count;
	int		start;
	int		index;

	count = 0;
	start = 0;
	index = 0;
	str_list = (char **)malloc(sizeof(char) * (ft_countword((char *)s, c) + 1));
	if (!str_list)
		return (NULL);
	while (s[count] != '\0')
	{
		if (s[count] != c)
		{
			start = count;
			while (s[count] != c)
				count++;
			str_list[index++] = ft_substr(s, start, count-- - start);
		}
		count++;
	}
	str_list[index] = '\0';
	return (str_list);
}

/*int	main(void)
{

        char **tab = ft_split("", 'o');

        printf("/ 0 / %s\n", tab[0]);
        printf("/ 1 / %s\n", tab[1]);
        printf("/ 2 / %s\n", tab[2]);

        //ft_free(tab);
        return (0);
}*/
