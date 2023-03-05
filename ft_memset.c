/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:18:49 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/05 13:50:09 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str_char;

	str_char = (char *)str;
	while (n-- > 0)
		str_char[n] = c;
	return ((void *)str_char);
}
/*#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'A',7);
   puts(str);
   
   return(0);
}*/
