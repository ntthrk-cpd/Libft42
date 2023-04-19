/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:16:01 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 23:58:32 by ncheepan         ###   ########.fr       */
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
