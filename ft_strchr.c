/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:36:41 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/05 13:35:50 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (c > 127)
		c -= 128;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)(str + index));
		index++;
	} 
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

/* not complet.
int main () {
   char str[] = "Hello world  Welcome";
   char ch = ' ';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
