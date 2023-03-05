/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:20:48 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/05 15:51:42 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_boo(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_ch;
	unsigned char	*str2_ch;

	str1_ch = (unsigned char *)str1;
	str2_ch = (unsigned char *)str2;
	if (!n)
		return (0);
	if (*str2_ch == '\0' || *str1_ch == '\0')
		return (-1);
	while (--n && *str1_ch == *str2_ch)
	{
		str1_ch++;
		str2_ch++;
	}
	return (ft_check_boo((int)(*str1_ch - *str2_ch)));
}
/*#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "\0", 6);
   memcpy(str2, "\0", 6);

   ret = memcmp(str1, str2, -2);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
	printf("\n--------------------------------------\n");  
ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
