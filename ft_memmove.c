/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:44 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/05 15:02:46 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	index;

	index = -1;
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (n == 0)
		return (dest);
	while (++index < n)
		char_dest[index] = char_src[index];
	return ((void *)dest);
}
/* not complete.
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldskiiuoooop";
   const char src[]  = "test";
	size_t n = 0;

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, n);
   printf("1 After memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, n);
    printf("2 After ft_memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
