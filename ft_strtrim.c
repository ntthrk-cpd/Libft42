/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/22 22:31:59 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*Set_Back(char *s)
{
        int     count;

        count = ft_strlen(s);
	while (s[count] == '\t' || s[count] == '\n' || s[count] == ' ')
                s[count--] = '\0';
	return (s);		
}
char	*Set_Front(char *s)
{

	int	count;

	count = 0;
	while (s[count] == '\t' || s[count] == '\n' || s[count] == ' ')
		count++;
	return (s + count);
}
char	*Remove_Char(char *s, char *set)
{
	int	count;
	int	pos;
	char	*str_new;

	count = 0;
	pos = 0;
	str_new = s;
	printf("rm is %s\n", set);
	if (set[0] != '\0')
	{
		while (s[pos] != '\0')
		{
			
			if (s[pos] != set[0])
			{
				str_new[count] = s[pos];		
				printf("%c\t" , str_new[count]);
				count++;
			}
			pos++;  	
		}
		str_new[count] = '\0';
		printf("-----> %s\n", s);
		Remove_Char((char *)s, (char *)set + 1);
	}
	return (s);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t		len_s1;

	len_s1 = ft_strlen(s1);
	str_trim = (unsigned char *)malloc(len_s1);

	if(!*str_trim)
	{
		str_trim = Set_Front((char *)s1);
		str_trim = Set_Back(str_trim);
		str_trim = Remove_Char(str_trim, (char *)set);
		return (str_trim);			
	}
	return (NULL);
}

int	main()
{
	printf("sum = %s\n", ft_strtrim("\t   Hello Wellcome   \n", "eo"));
	return (0);
}
