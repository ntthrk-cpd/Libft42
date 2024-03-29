/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:55:53 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/15 23:01:44 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch < 65 || ch > 90)
		&& (ch < 97 || ch > 122))
		return (0);
	return (1);
}
