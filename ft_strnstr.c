/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:55:17 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/09 19:38:28 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = 0;
	j = 0;
	cpy = NULL;
	if (little[0] == '\0' || little == NULL)
		return ((char *)big);
	while (len-- > 0 && big[i] && little[j])
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && len > 0)
		{
			cpy = (char *)big + i;
			j++;
		}
		i++;
	}
	if (little[j] == '\0')
		return (cpy);
	else
		return (NULL);
}

/*int	main(void)
{
	//const char *largest = "aaabcabcd";
	char *ptr;
	char *str;

	ptr = strnstr("1", "a", 1);
	str = ft_strnstr("22", "b", 2);
	printf("reel function ptr = %s\n", ptr);
	printf("my funcion str = %s\n", str);
	return (0);
}*/
