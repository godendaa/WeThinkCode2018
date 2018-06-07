/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:16:33 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/06 14:20:22 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#DEFINE MIN –2147483648 
#DEFINE MAX 2147483647

int	ft_atoi(char const *s)
{
	int i;
	int result;

	i = 0;	
	result = 0;
	while (s[i]) 
	{
		if (result *  10 < result)
			return (0);
		else
		{
			result = result + (s[i] * 10);
		}
		i++;
	}
	return (result / 10);
}

int	main() 
{
	ft_putnbr(ft_atoi("96854"));
	return (0);
}
