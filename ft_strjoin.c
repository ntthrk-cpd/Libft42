/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:21:18 by ncheepan          #+#    #+#             */
/*   Updated: 2023/02/20 21:10:15 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	unsigned int	sum_len;
	unsigned int	len_s2;

	s1_len = ft_strlen(s1);
	sum_len = sum_len + ft_strlen(s2);
	sub_str = (char *)malloc(sum_len);
	if (!*str_join)
	{
		while (s1_len < (sum_len)
			&& s2[s1_len] != '\0')
		{
			str_join[s1_len] = s[count + start];
			str_join++;
		}
		sub_str[count] = '\0';
		return ((char *)sub_str);
	}
	return (NULL);
}
