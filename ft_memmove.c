/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:44 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/08 09:24:49 by ncheepan         ###   ########.fr       */
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
	if (dest == NULL && src == NULL)
		return (NULL);
	while (++index < n)
		char_dest[index] = char_src[index];
	return ((void *)char_dest);
}/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "soo";
   const char src[] = "oopopopopopo";
	size_t n = -6;

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, n);
   printf("1 After memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, n);
    printf("2 Afterft_memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
