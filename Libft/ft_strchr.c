/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:35:28 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 15:08:14 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = "This is MY string!";
	char *first_M = ft_strchr(str, 'M');
	printf("first_M : %s\n", first_M);
	char *first_Z = ft_strchr(str, 'Z');
	printf("first_Z : %s\n", first_Z);
	char *first_i = strchr(str, 'i');
	printf("first_i : %s\n", first_i);
	return (0);
}*/
