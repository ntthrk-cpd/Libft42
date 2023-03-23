/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:35:12 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/18 16:12:20 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	count = 0;
	src_len = ft_strlen(src);
	if ((!dst && dstsize == 0) || dstsize == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (!src)
		return (dest_len);
	while ((dest_len + count) < (dstsize - 1) && src[count] != '\0')
	{
		dst[dest_len + count] = src[count];
		count++;
	}
	dst[dest_len + count] = '\0';
	if (dstsize < dest_len)
		return (src_len + dstsize);
	else
		return (dest_len + src_len);
}
/*#include <string.h>
       #include <string.h>
       #include <time.h>
       #include <stdio.h>

int iTest = 1;
int main(void)
{
  char dest[30]; memset(dest, 0, 30);
        char * src = (char *)"AAAAAAAAA";
        dest[0] = 'B';
        printf("/ 1 / check(\t%ld\t%s\n", ft_strlcat(dest, src, 0), dest);
        dest[0] = 'B';
        printf("/ 2 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 1), dest);
        memset(dest, 'B', 4);
        printf("/ 3 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 3), dest);
        printf("/ 4 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 6), dest);
        memset(dest, 'C', 5);
        printf("/ 5 / check(\t%ld\t%s\n",ft_strlcat(dest, src, -1), dest);
        memset(dest, 'C', 15);
        printf("/ 6 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 17), dest);
        memset(dest, 0, 30);
        printf("/ 7 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 1), dest);
        memset(dest, 0, 30); memset(dest, '1', 10);
        printf("/ 8 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 5), dest);
        memset(dest, 0, 30); memset(dest, '1', 10);
        printf("/ 9 / check(\t%ld\t%s\n",ft_strlcat(dest, src, 5), dest);
        memset(dest, 0, 30); memset(dest, '1', 10);
        printf("/ 10 / check(\t%ld\t%s\n",ft_strlcat(dest, "", 15), dest);
        memset(dest, 0, 30);
        printf("/ 11 / check(\t%ld\t%s\n",ft_strlcat(dest, "", 42), dest);
        memset(dest, 0, 30);
        printf("/ 12 / check(\t%ld\t%s\n",ft_strlcat(dest, "", 0), dest);
        memset(dest, 0, 30);
        printf("/ 13 / check(\t%ld\t%s\n",ft_strlcat(dest, "123", 1), dest);
        memset(dest, 0, 30);
        printf("/ 14 / check(\t%ld\t%s\n",ft_strlcat(dest, "123", 2), dest);
        memset(dest, 0, 30);
        printf("/ 15 / check(\t%ld\t%s\n",ft_strlcat(dest, "123", 3), dest);
        memset(dest, 0, 30);
        printf("/ 16 / check(\t%ld\t%s\n",ft_strlcat(dest, "123", 4), dest);
        memset(dest, 0, 30);
        printf("/ 17 / check(\t%ld\t%s\n",ft_strlcat(dest, "123", 0), dest);	
	printf("/ 18 / ftnull \t%ld\t%s\n", ft_strlcat(NULL, "123", 0), dest);
	printf("/ 18 / null \t%ld\t%s\n", strlcat(NULL, "123", 0), dest);
	printf("\n-----------------------------------------------\n");
	int	arg;
	
	arg = 0;
        while (++arg < 10)
        {
        	memset(dest, 0, 15);
        	memset(dest, 'r', 6);
		if (arg == 1)
        	{
        	        dest[11] = 'a';
        	        printf("/ 1 / \t%ld\t%s\n", ft_strlcat(dest, "lorem", 15), dest);
        	}
        	else if (arg == 2)
        	{
                	printf("/ 2 / \t%ld\t%s\n", ft_strlcat(dest, "", 15), dest);
        	}
		else if (arg == 3)
        	{
        	        dest[0] = '\0';
                	dest[11] = 'a';
                	printf("/ 3 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum", 15), dest);
        	}
        	else if (arg == 4)
        	{
        	        dest[14] = 'a';
        	        printf("/ 4 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15), dest);

        	}
        	else if (arg == 5)
        	{
        	        dest[10] = 'a';
        	        printf("/ 5 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0), dest);
        	}
        	else if (arg == 6)
        	{
        	        dest[10] = 'a';
        	        printf("/ 6 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1), dest);
        	}
        	else if (arg == 7)
        	{
        	        memset(dest, 'r', 15);
        	        printf("/ 7 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
        	}
        	else if (arg == 8)
        	{
        	        dest[10] = 'a';
        	        printf("/ 8 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 6), dest);
        	}
        	else if (arg == 9)
        	{
        	        memset(dest, 'r', 14);
        	        printf("/ 9 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15), dest);
        	}
	}
return (0);
}
*/
