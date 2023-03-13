/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:20:27 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/13 12:20:11 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("/ 1 / check( =0\t%d\n", ft_strncmp("t", "", 0));
	printf("/ 2 / check( =0\t%d\n", ft_strncmp("1234", "1235", 3));
	printf("/ 3 / check( <0\t%d\n", ft_strncmp("1234", "1235", 4)); 
	printf("/ 4 / check( <0\t%d\n", ft_strncmp("1234", "1235", -1));
	printf("/ 5 / check( =0\t%d\n", ft_strncmp("", "", 42));
	printf("/ 6 / check( =0\t%d\n", ft_strncmp("Tripouille", "Tripouille", 42));
	printf("/ 7 / check( <0\t%d\n", ft_strncmp("Tripouille", "tripouille", 42) ); 
	printf("/ 8 / check( >0\t%d\n", ft_strncmp("Tripouille", "TriPouille", 42));
	printf("/ 9 / check( >0\t%d\n", ft_strncmp("Tripouille", "TripouillE", 42));
	printf("/ 10 / check( <0\t%d\n", ft_strncmp("Tripouille", "TripouilleX", 42)); 
	printf("/ 11 / check( >0\t%d\n", ft_strncmp("Tripouille", "Tripouill", 42));
	printf("/ 12 / check( =0\t%d\n", ft_strncmp("", "1", 0)); 
	printf("/ 13 / check( =0\t%d\n", ft_strncmp("1", "", 0)); 
	printf("/ 14 / check( <0\t%d\n", ft_strncmp("", "1", 1)); 
	printf("/ 15 / check( >0\t%d\n", ft_strncmp("1", "", 1)); 
	printf("/ 16 / check( =0\t%d\n", ft_strncmp("", "", 1)); 
	write(1, "\n", 1);
	printf("\n------------------------------------------------\n");
	printf("/ 1 / check( 0\t%d\n",ft_strncmp("salut", "salut", 5));
	printf("/ 2 / check( -1\t%d\n",ft_strncmp("test", "testss", 7));
	printf("/ 3 / check( 1\t%d\n",ft_strncmp("testss", "test", 7));
	printf("/ 4 / check( 1\t%d\n",ft_strncmp("test", "tEst", 4));
	printf("/ 5 / check( -1\t%d\n",ft_strncmp("", "test", 4));
	printf("/ 6 / check( 1\t%d\n",ft_strncmp("test", "", 4));
	printf("/ 7 / check( 0\t%d\n",ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	printf("/ 8 / check( 0\t%d\n",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("/ 9 / check( 0\t%d\n",ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("/ 10 / check( 0\t%d\n",ft_strncmp("abcdefgh", "", 0));
	printf("/ 11 / check( 1\t%d\n",ft_strncmp("test\200", "test\0", 6));
	printf("/ 11 / check( 1\t%d\n", strncmp("test\200", "test\0", 6));
	return (0);
}*/
