/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:36:42 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/11 20:38:09 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_num_length(int n)
{
    int length = (n <= 0) ? 1 : 0;

    while (n != 0)
    {
        n /= 10;
        length++;
    }

    return length;
}

char *ft_itoa(int n)
{
    int length = get_num_length(n);
    char *result = (char *)malloc(length + 1);

    if (!result)
        return (NULL);

    result[length] = '\0';

    if (n < 0)
    {
        result[0] = '-';
        n = -n;
    }

    if (n == 0)
    {
        result[0] = '0';
        return (result);
    }

    while (length > 1)
    {
        result[length - 1] = '0' + (n % 10);
        n /= 10;
        length--;
    }

    result[0] = '0' + n;

    return (result);
}

