/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/03/23 16:17:47 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/23 16:43:27 by ncheepan         ###   ########.fr       */
=======
/*   Created: 2023/02/20 17:05:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/18 17:17:49 by ncheepan         ###   ########.fr       */
>>>>>>> cd3a0751c9cf5d00391b0ae7b9a4e9bff74de27d
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	count;

	count = 0;
<<<<<<< HEAD
	sub_str = (char *)malloc(sizeof(char *) * len);
	if (sub_str)
	{
		while (count < len
			&& s[start] != '\0')
			sub_str[count++] = s[start++];
		sub_str[count] = '\0';
		return (sub_str);
=======
	sub_str = (char *)malloc(sizeof(char *) * len + 1);
	if (sub_str && 
		ft_strlen(s) >= start)
	{
		while (count < len
			&& s[count + start] != '\0')
		{
			sub_str[count] = s[count + start];
			count++;
		}
		sub_str[count + start] = '\0';
		return ((char *)sub_str);
>>>>>>> cd3a0751c9cf5d00391b0ae7b9a4e9bff74de27d
	}
	return (NULL);
}
/*
int	main()
{
<<<<<<< HEAD
	char *s = ft_substr("lorem ipsum dolor sit amet", 0, 10);
	printf("\n%s\n", s);
	free(s);

	s = ft_substr("tripouille", 1, 1);
	printf("r|%ld :\t%s\n", strlen(s), s);
        free(s);

	s = ft_substr("tripouille", 100, 1);
        printf("|%ld :\t%s\n", strlen(s), s);
        free(s);

	char * str = strdup("1");
        s = ft_substr(str, 42, 42000000);
	printf("|%ld :\t%s\n", strlen(s), s);
        free(s); free(str);

	str = strdup("0123456789");
        s = ft_substr(str, 9, 10);
	printf("9|%ld :\t%s\n", strlen(s), s);
        free(s); free(str);


	return (0);
=======
	printf("%s\n",ft_substr("hello World", 1, 1));

>>>>>>> cd3a0751c9cf5d00391b0ae7b9a4e9bff74de27d
}*/
