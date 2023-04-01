/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/30 17:54:32 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getsize(char const *s, char const *set)
{
	int	count;
	int	pos1;
	int	pos2;

	count = ft_strlen(s);
	pos1 = 0;
	while (set[pos1] != '\0')
	{
		pos2 = 0;
		while (s[pos2] != '\0')
		{
			if (s[pos2] == set[pos1])
				count--;
			pos2++;
		}
		pos1++;
	}
	return (count);
}

char	*remove_char(char *s, char *set)
{
	int		count;
	int		pos;
	char	*str_new;

	count = 0;
	pos = 0;
	str_new = ft_strdup(s);
	if (set)
	{
		while (s[pos] != '\0')
		{
			if (s[pos] != set[0])
				str_new[count++] = s[pos];
			pos++;
		}
		str_new[count] = '\0';
		if (set[1] != '\0')
			return (remove_char(str_new, set + 1));
	}
	return (str_new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	size_str;

	size_str = ft_getsize(s1, set);
	str_trim = (char *)malloc(sizeof(char) * (size_str + 1));
	if (str_trim)
	{
		str_trim = remove_char((char *)s1, (char *)set);
		return (str_trim);
	}
	return (NULL);
}
/*
int	main()
{
	char *s = ft_strtrim("\t\t   \nHello World\t \t", "Ho");
	printf("\n%s\n", s);

	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char *strtrim1 = ft_strtrim(s1, " ");
	printf("1\n%s\n----------------------\n%s\n\n", s1, strtrim1);

	char s2[] = "lorem ipsum dolor sit amet";
	char *strtrim2 = ft_strtrim(s2, "te");
	printf("2\n%s\n-----------------------\n%s\n\n", s2, strtrim2);
	
	char s3[] = " lorem ipsum dolor sit amet";
	char *strtrim3 = ft_strtrim(s3, "l ");
	printf("3\n%s\n------------------------\n%s\n\n", s3, strtrim3);

	char s4[] = "lorem ipsum dolor sit amet";
	char *strtrim4 = ft_strtrim(s4, "tel");
	printf("4\n%s\n-------------------------\n%s\n\n", s4, strtrim4);
	
	char s5[] = "          ";
	char *strtrim5 = ft_strtrim(s5, " ");
	printf("5\n%s\n-------------------------\n%s\n\n", s5, strtrim5);
	return (0);
}*/
