/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:35:12 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/13 09:13:00 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	count = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!src)
		return (dest_len);
	if (dstsize == 0)
		return (src_len);
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
	printf("\n-----------------------------------------------\n");
        dest[10] = 'a';
        printf("/ 18 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1), dest);
       	memset(dest, 'r', 15);
        printf("/ 19 / \t%ld\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);

return (0);
}
*/
