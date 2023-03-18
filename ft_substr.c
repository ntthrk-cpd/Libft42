/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:05:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/18 17:17:49 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	count;

	count = 0;
	sub_str = (char *)malloc(sizeof(char *) * len + 1);
	if (sub_str && 
		ft_strlen(s) >= start)
	{
		while (count < len
			&& s[count + start] != '\0')
		{
			sub_str[count] = s[count + start];
			count++;
		}
		sub_str[count + start] = '\0';
		return ((char *)sub_str);
	}
	return (NULL);
}
/*
int	main()
{
	printf("%s\n",ft_substr("hello World", 1, 1));

}*/
