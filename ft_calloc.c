/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:16:01 by ncheepan          #+#    #+#             */
/*   Updated: 2023/03/17 23:32:27 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = (void *)malloc(count * size);
	if (!s || count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
/*
#include <string.h>
#include <stdint.h>
int iTest = 1;
int main(void)
{
        if(!ft_calloc(SIZE_MAX, SIZE_MAX))
        	printf("null");
	else 
		printf("hello");
	write(1, "\n", 1);
        return (0);
}
*/
