/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:55:11 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/01 20:10:05 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_set_position(char *s,char c)
{
	int	*pos;
	int	count;

	pos = 0;
	count = 0;
	while(s[count] == c)
		count++;
	pos[0] = count;
	while(s[count] != c)
		count++;
	pos[1] = count;
	return (pos);
}

char	**ft_getlist(char **list_str, char *s, char c, int index)
{
	int		*pos;	
	
	list_str[index] = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (list_str[index] && index == 0)
		return (NULL);
	pos = ft_set_position(s, c);
	if(pos[0] != pos[1])
	{
		list_str[index] = ft_substr(s, pos[0], pos[1]);
		s = s + pos[1];
		ft_getlist(list_str, (char *)s, c, index + 1);
	}
	return (list_str);
}

char	**ft_allfree(char **s)
{
	size_t	count;

	count = 0;
	/*while (s[count] != 0)
	{
		s[count++] = free(s[count]);
	}*/
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char **list_str;
	char len_s;

	len_s = ft_strlen(s);
	list_str = (char **)malloc(sizeof(char *) * len_s);
	if (!list_str)
		return (NULL);
	list_str = ft_getlist(list_str, (char *)s, c, 0);
	return (list_str);
}

int	main()
{
	char **str;
	int	count;
	
	count = 0;
	str = ft_split("oooo      \tHello World,,,, you you ooooo", 'o');

	printf("1\t%s\n", str[0]); 
	return (0);
}
