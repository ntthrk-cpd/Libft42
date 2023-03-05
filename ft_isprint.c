/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:46 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/05 12:54:49 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 31;
   int var2 = 32;
   int var3 = 128;
   int var4 = 127;
   
	printf("%d\t%d\t%d\t%d\n",var1, var2, var3, var4 );
   if( isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }
   
   if( isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }
   
   if( isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }
   
   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }
   
	printf("------------------------------\n");
   if( ft_isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("va1 = |%c| can't be printed\n", var1 );
   }

   if( ft_isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }

   if( ft_isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }

   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }

   return(0);
}*/
