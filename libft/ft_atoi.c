/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:52:36 by godendaa          #+#    #+#             */
/*   Updated: 2018/06/08 08:57:37 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX (2147483647)
#define MIN (-2147483648)

int    ft_atoi(const char *str)
{
    long i;
    long neg;
    long res;
    
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    neg = i;
    if (str[i] == '+' || str[i] == '-')
        i++;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    if (str[neg] == '-')
        return (-res);
    return (res);
}
