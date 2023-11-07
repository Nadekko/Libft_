/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:48:01 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 15:10:03 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int	main(void)
{
	char	c;

	c = 'A';
	printf("when uppercase is passed : %d\n", ft_toupper(c));
	c = 'a';
	printf("when lowercase is passed : %d\n", ft_toupper(c));
	c = '+';
	printf("when non alpha is passe : %d\n", ft_toupper(c));
	return (0);
}*/
