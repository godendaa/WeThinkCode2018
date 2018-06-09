/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:53:03 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/09 11:53:20 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *ps1;
	char *ps2;

	ps1 = (char*)s1;
	ps2 = (char*)s2;
	while (*ps1)
		ps1++;
	while (*ps2 && n--)
	{
		*ps1++ = *ps2++;
	}
	*ps1 = '\0';
	return (s1);
}
