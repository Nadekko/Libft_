/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:02:52 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/06 17:05:55 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	d = dest;
	i = 0;
	if (*d != *s)
	{
		if (d < s)
		{
			while (n--)
				*d++ = *s++;
		}
		else
		{
			while (i < n)
			{
				d[i] = s[i];
				i++;
			}
		}
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	const char src[] = "Hello, World !";
	char dest[] = "Good Night, World !";

	printf("dest before memmove : %s\n", dest);
	ft_memmove(dest, src, 5);
	printf("dest after memmove : %s\n", dest);
	void *result = memmove(dest, src, 5);
	char	*rst = result;
	printf("reel function : %s\n", rst);
	return (0);
}*/
