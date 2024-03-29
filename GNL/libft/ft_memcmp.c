/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:30:02 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/08 14:42:53 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char*)(s1 - 1);
	ptr2 = (unsigned char*)(s2 - 1);
	if (!n)
		return (0);
	while ((--n) + 1 && *(++ptr1) == *(++ptr2))
		;
	return (*ptr1 - *ptr2);
}
