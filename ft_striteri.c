/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:33:09 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:51 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index])
		index++;
	}
}
