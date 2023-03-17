/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:20:48 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/17 18:28:53 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_ch;
	const unsigned char	*str2_ch;

	str1_ch = str1;
	str2_ch = str2;
	if (n <= 0)
		return (0);
	while (n--)
	{
		if (*str1_ch++ != *str2_ch++)
			return ((int)(*--str1_ch - *--str2_ch));
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "\0", 6);
   memcpy(str2, "\0", 6);

   ret = ft_memcmp(str1, str2, -2);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
	printf("\n--------------------------------------\n");  
ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
	printf("\n_________________________________________________\n");
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("/ 1 / check(%d\n", memcmp(s, sCpy, 4)); 
	printf("/ 2 / check(%d\n", ft_memcmp(s, s2, 0)); 
	printf("/ 3 / check(%d\n", ft_memcmp(s, s2, 1)); 
	printf("/ 4 / check(%d\n", ft_memcmp(s2, s, 1)); 
	printf("/ 5 / check(%d\n", ft_memcmp(s2, s3, 4));
	printf("-------------------------------------------\n");
	printf("/ 1 / check(%d\n", memcmp(s, sCpy, 4)); 
	printf("/ 2 / check(%d\n", memcmp(s, s2, 0)); 
	printf("/ 3 / check(%d\n", memcmp(s, s2, 1)); 
	printf("/ 4 / check(%d\n", memcmp(s2, s, 1)); 
	printf("/ 5 / check(%d\n", memcmp(s2, s3, 4));    
	printf("\n_____________________________________________________\n");
printf("%d\n", ft_memcmp("salut", "salut", 5));
	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
	printf("%d\n", ft_memcmp("testss", "test", 5));
	printf("%d\n", ft_memcmp("test", "tEst", 4));
	printf("%d\n", ft_memcmp("", "test", 4));
	printf("%d\n", ft_memcmp("test", "", 4));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("\n-------------------------------------\n");
	printf("%d\n", memcmp("salut", "salut", 5));
	printf("%d\n", memcmp("t\200", "t\0", 2));
	printf("%d\n", memcmp("testss", "test", 5));
	printf("%d\n", memcmp("test", "tEst", 4));
	printf("%d\n", memcmp("", "test", 4));
	printf("%d\n", memcmp("test", "", 4));
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%d\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
   return(0);
}*/
