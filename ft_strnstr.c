/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:49:00 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/16 23:28:28 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main()
{
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 30));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%c\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	return (0);
}
