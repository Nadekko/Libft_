/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:07:37 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/06 17:58:02 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*src != '\0')
			*dst++ = *src++;
		else
			break;
	}
	*dst = '\0';
	return (i);
}*/

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    while (i + 1 < size && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    if (size > 0)
        dst[i] = '\0';

    while (src[i] != '\0')
        i++;

    return i;
}

#include <stdio.h>

int main(void)
{
    char dest[20];
    const char *src = "Hello, world!";
    size_t size = 5;

    size_t result = ft_strlcpy(dest, src, size);

    printf("Copied string: %s\n", dest);
    printf("Resulting length: %zu\n", result);

    return 0;
}
