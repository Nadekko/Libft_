/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:26:02 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 03:00:28 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}

/*
int	main(void)
{
	char	str[] = "Hello, World !";
	printf("before memset() : %s\n", str);
	ft_memset(str, '*', 3);
	printf("After memset() : %s\n", str);
	return (0);
}*/
