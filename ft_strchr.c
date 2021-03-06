/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awanngre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:34:13 by awanngre          #+#    #+#             */
/*   Updated: 2022/06/12 23:25:01 by awanngre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c = c - 256;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++ ;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}
