/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:20:48 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/17 19:03:22 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_ch;
	unsigned char	*str2_ch;

	str1_ch = (unsigned char *)str1;
	str2_ch	= (unsigned char *)str2;
	//if (!*str1_ch || !*str2_ch) 
	//	return ((int)(*str1_ch - *str2_ch));
	/*while(--n && *str1_ch == *str2_ch)
	{
		*str1_ch++;
		*str2_ch++;
		if (*str1_ch != *str2_ch)
		{
			if ((int)(*str1_ch - *str2_ch) < 0)
				return (-1);
			else 
				return (1);
		}
	}*/
	while (n-- != 0)
		if(*str1_ch++ != *str2_ch++)
			return ((int)(*--str1_ch - *--str2_ch)); 
	return (0);
}
int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

printf("sum is %d\n", ret);
   if(ret > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   printf("-------------------------------------------\n");
	printf("1\t%d\n", memcmp("\tsalut", "\0salut", 5));
	printf("2\t%d\n", memcmp("t\200", "t\0", 2));
	printf("3\t%d\n", memcmp("test", "test", 5));
	printf("4\t%d\n", memcmp("test", "tEst", 4));
	printf("5\t%d\n", memcmp("\0iii", "teso", 4));
	printf("6\t%d\n", memcmp("teso", "", 4));
	printf("7\t%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("8\t%d\n", memcmp("abcdefgh", "abcdwxyz", 6));
	printf("9\t%d\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("9\t%d\n", memcmp("", "", 3));
printf("------------------------------------------------\n");
   printf("------------------ft-------------------------\n");
        printf("1\t%d\n", ft_memcmp("\tsalut", "\0salut", 5));
        printf("2\t%d\n", ft_memcmp("t\200", "t\0", 2));
        printf("3\t%d\n", ft_memcmp("test", "test", 5));
        printf("4\t%d\n", ft_memcmp("test", "tEst", 4));
        printf("5\t%d\n", ft_memcmp("\0iiii", "teso", 4));
        printf("6\t%d\n", ft_memcmp("teso", "", 4));
        printf("7\t%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
        printf("8\t%d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
        printf("9\t%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
        printf("9\t%d\n", ft_memcmp("", "", 3));

   return(0);
}
