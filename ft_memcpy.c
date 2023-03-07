/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 06:29:05 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/07 14:55:20 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*char_dest++ = *char_src++;
	return (dest);
}
/* not complet. [crash]: your memcpy does not behave well with NULL as both params with size
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "ood";
   char dest[50];	
	size_t n = 10;

   strcpy(dest, "uuuuu");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, n);
   printf("1 After memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, n);
   printf("2 After ft_memcpy dest = %s\n", dest);
   return(0);
}*/
