/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:56:11 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/02 19:59:05 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 97 && c <= 122)
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
