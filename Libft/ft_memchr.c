/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:55:33 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 19:24:48 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- > 0)
	{
		if (((char *)s)[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Looking for character 'f'";
	const char	ch = 'f';

	printf("str = %s\n\n", str);
	printf("NOT MINE >> 
		Remaining string after '%c' : %s\n", ch, (char *)memchr(str, ch, 20));
	printf("MINE >> 
		Remaining string after '%c' : %s\n", ch, (char *)ft_memchr(str, ch, 20));
	return (0);
}*/
