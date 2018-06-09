/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:27:56 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/09 11:30:26 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	len++;
	while (--len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
