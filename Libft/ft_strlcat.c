/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:27:41 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 15:08:54 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		src++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (slen + len);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len > size)
		dst_len = size;
	return (dst_len + strlcpy(dst + dst_len, src, size - dst_len));
}

/*int	main(void)
{
	char	dst[20] = "Hello, ";
	const char	*src = "world !";
	size_t dst_size = sizeof(dst);
	size_t result = ft_strlcat(dst, src, dst_size);
	printf("Concatened string : %s\n", dst);
	printf("Total length : %zu\n", result);
	char dest2[20];
	size_t rst = strlcat(dest2, src, 5);
	printf("Real function: %s\n", dest2);
	printf("Real function: %zu\n", rst);
	return (0);
}*/
