/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:05:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/20 18:03:30 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*sub_str;
	unsigned int	count;
	unsigned int	len_substr;

	len_substr = ((unsigned int)len - start) + 1 ;
	sub_str = (char *)malloc(len_substr);
	if (!*sub_str)
	{
		/*while (count < len_substr
			&& s[count] != '\0')
		{
			sub_str[count] = s[count + start];
			count++;
		}
		sub_str[count] = '\0';
		*/
		ft_memcpy(sub_str, (void *)s + start, len_substr);  
		return ((char *)sub_str);
	}
	return (NULL);		
}

int	main()
{
	char str[] = "What is it? It is a book";
	char sub[] = "wow!!!";

	sub = ft_substr(str, 5, 9);
	printf("\n%s", sub); 
}
