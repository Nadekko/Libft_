/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:03:58 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 17:15:35 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (len -- > 0 && big[i] && little[j])
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)big + (i - j));
	else
		return (0);
}

/*int	main(void)
{
	const char *largest = "Foo Bar Baz";
	const char *small = "Bar";
	char *ptr;
	char *str;

	ptr = strnstr(largest, small, 10);
	str = ft_strnstr(largest, small,  10);
	printf("reel function ptr = %s\n", ptr);
	printf("my funcion str = %s\n", str);
	return (0);
}*/
