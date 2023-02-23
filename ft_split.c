/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:55:11 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/24 00:23:35 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_set_arraysting(char *s, char c, int n)
{
 	char	**set_str;

	set_str = 
	substr();
	ft_set_arraysting(s + count, c, n++);
}

char	**ft_split(char const *s, char c)
{
	char **set_str;
	char len_s;

	len_s = ft_strlen(s);
	**set_str = (char **)malloc(sizeof(char *) * len_s);
	if (*set_str)
	{
		set_str = ft_set_arraysting(s, c, 0);
		return (set_str);
	}
	//ft_memfree();
	return (NULL);
}

int	main()
{
	printf("sum is %s\n", ft_split("      \tHello World,,,, you you ", "o"); 
	return (0);
}
