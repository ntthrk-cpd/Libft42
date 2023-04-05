/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/05 18:20:24 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getback(char const *s1, char const *set)
{
	size_t	back;

        back = ft_strlen(s1) - 1;
        while (ft_strchr(set, s1[back]) && back >= 0 )
                back--;
	printf("\nback : %ld\n" , back);
	return (back + 1);
}

size_t	getfront(char const *s1, char const *set)
{
	size_t	front;

      	front = 0;
        while (ft_strchr(set, s1[front]) && s1[front] != '\0')
                front++;
	printf("\nfront : %ld\n", front);
	return (front);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_new;
	size_t		size;
	
	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	printf("\ns1:%s | set:%s\t", s1, set);
	size = getback(s1, set) - getfront(s1, set);
	printf("\n%ld\n", size);
	if (size == 0)
		return (ft_strdup(""));
	str_new = (char *)malloc(sizeof(char) * (size  + 1));
	if (!str_new)
		return (NULL);
	str_new = ft_substr(s1, getfront(s1, set), size);	
	printf("\n%s\n", str_new);
	return (str_new);
}
/*
int	main()
{
	char *s = ft_strtrim("xxxHello Worlddxxdd", "Hxd");
	printf("\n%s\n", s);

	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char *strtrim1 = ft_strtrim(s1, "loremt");
	printf("1\n%s\n----------------------\n%s\n\n", s1, strtrim1);

	char s2[] = "lorem ipsum dolor sit amet";
	char *strtrim2 = ft_strtrim(s2, "te");
	printf("2\n%s\n-----------------------\n%s\n\n", s2, strtrim2);
	
	char s3[] = "   lorem ipsum dolor sit amet";
	char *strtrim3 = ft_strtrim(s3, "l ");
	printf("3\n%s\n------------------------\n%s\n\n", s3, strtrim3);

	char s4[] = "lorem ipsum dolor sit amet";
	char *strtrim4 = ft_strtrim(s4, "tel");
	printf("4\n%s\n-------------------------\n%s\n\n", s4, strtrim4);
	
	char s5[] = "          ";
	char *strtrim5 = ft_strtrim(s5, " ");
	printf("5\n%s\n-------------------------\n%s\n\n", s5, strtrim5);
	return (0);
}
*/
