/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:55:11 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/02 20:37:17 by ncheepan         ###   ########.fr       */
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
	free(list_str);
	return (list_str);
}

void	ft_free(char **s)
{
	size_t	count;

	count = 0;
	while (!s[count])
	{
		free(s[count]);
		count++;
	}
	free(s);
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
	ft_free(list_str);
	return (list_str);
}

/*------------------------------------*/

void freeTab(char * * tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}

int main(void)
{

	char **tab = ft_split("  hello  42  ", ' ');

	printf("/* 0 */ %s\n", tab[0]);  /*"hello"));*/
	printf("/* 1 */ %s\n", tab[1]); /*"42"));*/
	printf("/* 2 */ %s\n", tab[2]); /*== NULL);*/

	freeTab(tab);
	return (0);
}

