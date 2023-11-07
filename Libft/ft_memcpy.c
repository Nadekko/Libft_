/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:34:26 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 02:59:28 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char src[] = "Hellllllllo, World !";
	char dest[30];
	char idest[10];

	ft_memcpy(dest, src, 30);
	printf("Copied string is : %s\n", dest);
	ft_memcpy(idest, src, 5);
	printf("Coped string is : %s\n", idest);
	return (0);
}*/
