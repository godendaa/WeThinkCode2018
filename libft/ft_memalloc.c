/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:16:33 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/06 14:20:22 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *len;

	len = (unsigned char*)malloc(sizeof(char) * size);
	if (len == NULL)
		return (NULL);
	return (ft_memset(len, 0, size));
}
