/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:19:31 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 17:45:03 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(char *)s1 != *(char *)s2)
			return (*(char *)s1 - *(char *)s2);
		if (*(char *)s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(void)
{
	const char	s1[] = "ABC";
	const char	s2[] = "ABCDEF";
	int	i;
	int	a;

	i = ft_memcmp(s1, s2, 5);
	a = memcmp(s1, s2, 5);
	if (i < 0)
		printf("MINE = s1 is less than s2\n");
	else if (i > 0)
		printf("MINE = s2 is less than s1\n");
	else
		printf("MINE = s1 is equal to s2\n");
	if (a < 0)
		printf("NOT MINE = s1 is less than s2\n");
	else if (a > 0)
		printf("NOT MINE = s2 is less than s1\n");
	else
		printf("NOT MINE = s1 is equal to s2\n");
	return (0);
}*/
