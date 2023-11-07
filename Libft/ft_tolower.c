/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:55:41 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 15:09:49 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int	main(void)
{
	char	c;

	c = 'a';
	printf("when lowercase is passed : %d\n", ft_tolower(c));
	c = 'A';
	printf("when uppercase is passed : %d\n", ft_tolower(c));
	c = '-';
	printf("when non-alpha is passed : %d\n", ft_tolower(c));
	return (0);
}*/
