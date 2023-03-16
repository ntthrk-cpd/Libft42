/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:44 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/13 01:17:01 by ncheepan         ###   ########.fr       */
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
		char_dest += (n-1);
		char_src += (n-1);
		while (n-- > 0)
			*--char_dest = *--char_src;
	}
	else
	{
		while (--n)
			*char_dest++ = *char_src++;
	}
	return ((void *)dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main () {

char sResult[] = {65, 66, 67, 68, 69, 46, 45};

printf("sR : %s\n", (char *)sResult);
printf("sR1 : %s\n", (char *)sResult + 1);
printf("sRmemmove : %s\n", (char *)memmove(sResult + 1, sResult, 2));
printf("sRft_memmove : %s\n", (char *)ft_memmove(sResult + 1, sResult, 2));


printf("\n------------------------------------\n");
char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	arg = 0;
	while (++arg <= 5)
	{
		if (arg == 1)
		{
			if (dest != ft_memmove(dest, "consectetur", 5))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 2)
		{
			if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 3)
		{
			if (dest != ft_memmove(dest, src, 8))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 4)
		{
			if (src != ft_memmove(src, dest, 8))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 5)
		{
			if (src != ft_memmove(src, dest, 0))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		printf("\n");
	}
	printf("\n_____________________________________________________\n");
	arg = 0;
        while (++arg <= 5)
        {
                if (arg == 1)
                {
                        if (dest != memmove(dest, "consectetur", 5))
                                write(1, "dest's adress was not returned\n", 31);
                        write(1, dest, 22);
                }
                else if (arg == 2)
                {
                        if (dest != memmove(dest, "con\0sec\0\0te\0tur", 10))
                                write(1, "dest's adress was not returned\n", 31);
                        write(1, dest, 22);
                }
                else if (arg == 3)
                {
                        if (dest != memmove(dest, src, 8))
                                write(1, "dest's adress was not returned\n", 31);
                        write(1, dest, 22);
                }
                else if (arg == 4)
                {
                        if (src != memmove(src, dest, 8))
                                write(1, "dest's adress was not returned\n", 31);
                        write(1, dest, 22);
                }
                else if (arg == 5)
                {
                        if (src != memmove(src, dest, 0))
                                write(1, "dest's adress was not returned\n", 31);
                        write(1, dest, 22);
                }
                printf("\n");
        }

	return (0);
}*/
