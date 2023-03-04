/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:18:49 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/04 18:27:21 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str_char;

	str_char = (char *)str;
	str_char[n] = '\0';
	while (n-- > 0)
		str_char[n] = c;
	return ((void *)str_char);
}
