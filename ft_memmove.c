/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:44 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/17 19:22:14 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (char_dest > char_src)
	{	
		char_dest += (n);
		char_src += (n);
		while (n--)
			*--char_dest = *--char_src;
	}
	else
	{
		while (n--)
			*char_dest++ = *char_src++;
	}
	return ((void *)dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main () {

        char    ftsrc[] = "lorem ipsum dolor sit amet";
        char    *ftdest;
        int             arg;
        ftdest = ftsrc + 1;
        
        char    src[] = "lorem ipsum dolor sit amet";
        char    *dest;
        dest = src + 1;
       
        arg = 0;
	printf("src : %s, \ndest : %s\n\n", src, dest);
        while (++arg <= 5)
        {

                if (arg == 1)
                {
                        ft_memmove(ftdest, "consectetur", 5);
                        write(1, ftdest, 22);
                        printf("\n");
                        memmove(dest, "consectetur", 5);
                        write(1, dest, 22);
                        printf("\n");
                }
                else if (arg == 2)
                {
                         ft_memmove(ftdest, "con\0sec\0\0te\0tur", 10);
                        write(1, ftdest, 22);
                        printf("\n");
                        memmove(dest, "con\0sec\0\0te\0tur", 10);
                        write(1, dest, 22);
                        printf("\n");
                }
                else if (arg == 3)
                {
                       ft_memmove(ftdest, ftsrc, 8);
                        write(1, ftdest, 22);
                        printf("\n");
                        memmove(dest, src, 8);
                        write(1, dest, 22);
                        printf("\n");
                }
                else if (arg == 4)
                {
                        ft_memmove(ftsrc, ftdest, 8);
                        write(1, ftdest, 22);
                        printf("\n");
                        memmove(src, dest, 8);
                        write(1, dest, 22);
                        printf("\n");
                }
                else if (arg == 5)
                {
                        ft_memmove(ftsrc, ftdest, 0);
                        write(1, ftdest, 22);
                        printf("\n");
                        ft_memmove(src, dest, 0);
                        write(1, dest, 22);
                        printf("\n");
                }
                printf("\n");
        }
	return (0);
}*/
