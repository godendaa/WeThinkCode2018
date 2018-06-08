/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:46:53 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/08 13:54:29 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *ps1;
	char *ps2;

	ps1 = (char)s1;
	ps2 = (char)s2;
	while (*ps1)
		ps1++;
	while (*ps2)
		*(ps1++) = *(ps2++);
	*ps1 = '\0';
	return (s1);
}
