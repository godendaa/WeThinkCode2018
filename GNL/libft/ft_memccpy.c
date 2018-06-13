/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:59:25 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/08 10:59:30 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*out;
	unsigned char	*src;

	out = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		((unsigned char*)out)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			return (s1 + i + 1);
		}
		i++;
	}
	return (NULL);
}
