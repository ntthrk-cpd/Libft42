/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:05:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/05 11:17:51 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	s_len;
	unsigned int	count;

	count = 0;
	s_len = ft_strlen(s);
	sub_str = (char *)malloc(sizeof(char) * ((s_len - start) + 1));
	if (sub_str == NULL)
		return (NULL);
	while (count < len
		&& start < s_len)
		sub_str[count++] = s[start++];
	sub_str[count] = '\0';
	printf("\n>>>%ld\t%s\n", ft_strlen(sub_str), sub_str);
	return (sub_str);
}
/*
int	main()
{
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

}*/
