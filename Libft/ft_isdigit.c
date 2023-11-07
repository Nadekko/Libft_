/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:43:25 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/07 02:58:56 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int	main(void)
{
	char	c;

	c = '1';
	printf("Result when digit is passed : %d", ft_isdigit(c));
	c = '4';
	printf("\nResult when digit is passed : %d", ft_isdigit(c));
	c = 'A';
	printf("\nResult when alpha is passed : %d", ft_isdigit(c));
	c = '-';
	printf("\nResult when non-alpha is passed : %d", ft_isdigit(c));
	return (0);
}*/
