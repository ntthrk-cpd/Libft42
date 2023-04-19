/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:18:49 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 00:11:33 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str_char;

	str_char = (char *)str;
	while (n-- > 0)
		str_char[n] = c;
	return (str);
}
