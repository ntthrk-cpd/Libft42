/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:45:43 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/29 22:31:17 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_n(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_tochar(char *str, int n, int len)
{
	int	negative;

	negative = 0;
	if (n == 0)
		return ("0");
	str[len--] = '\0';
	if (n < 0)
	{
		negative = 1;
		if (n == -2147483648)
		{	
			str[len--] = (n % 10 * -1) + '0';
			n /= 10;
		}
		n *= -1;
	}
	while (len >= 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
		if (negative == 1 && len == 0)
			str[len--] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		len;

	len = ft_count_n(n);
	str_num = malloc(sizeof(char) * (len + 1));
	str_num = ft_tochar(str_num, n, len);
	return (str_num);
}
/*
int	main()
{
		char *res = ft_itoa(0);
	printf("0\t: %s\n", res);

	res = ft_itoa(9);
	printf("9\t: %s\n", res);

	res = ft_itoa(-9);
	printf("-9\t: %s\n", res);

	res = ft_itoa(10);
	printf("10\t: %s\n", res);

	res = ft_itoa(-10);
	printf("-10\t: %s\n", res);

	res = ft_itoa(8124);
	printf("8124\t: %s\n", res);

	res = ft_itoa(-9874);
	printf("-9874\t: %s\n", res);
	
	res = ft_itoa(543000);
	printf("543000\t: %s\n", res);

	res = ft_itoa(-2147483648LL);
	printf("-2147483648LL\t: %s\n", res);

	res = ft_itoa(2147483647);
	printf("2147483647\t: %s\n", res);
        
	return 0;
}
*/
