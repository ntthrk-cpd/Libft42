/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:45:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/24 04:35:53 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_count_n(int n)
{
	int	count;

	count = 1;
	if ( n < 0)	
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_tochar(char *str, unsigned int n, int count)
{
	printf("\ntochar : %s\t%d\t%d\n", str, n, count);
	while (n > 0)
	{
		printf("%d", count);
		str[count] = (n % 10) + '0';
		printf("|%c\t", str[count]); 
		n /= 10;
		count--;
	}
	str[count]
	printf("\ntochar :%s\n", str);
		return (str);
}

char *ft_itoa(int n)
{
	char	*str_num;
	int	count;
	int	len;

	len = ft_count_n(n);
	count = 0;	
	printf("\nlen_n is %d\n", len); 
	str_num = malloc(sizeof(char) * len);
	printf("n is %d\n" , n);
	if (n == 0);
		str_num[count] = '0';
	if (n == -2147483648)
	{
		str_num[len - 1] = '8';
		n /= 10;
		printf("intmin : %d\n", n);
	}
	if (n < 0) 
	{
		str_num[count++] = '-';
		n *= -1;
		printf("nega :%d\n", n);
	}
	if (n > 0)
		str_num = ft_tochar(str_num, n, count_n);
	printf("\nsum : %s\n", str_num);
	return  (str_num);
}

int	main()
{
	printf("\n\nresult is %s\n", ft_itoa(123));
	return (0);
}
