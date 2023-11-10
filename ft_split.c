/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:06:32 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/10 18:24:32 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	count_s;
	size_t	i;
	size_t	sl;

	i = 0;
	count_s = count_sep(s, c);
	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	*sp = malloc(sizeof(char *) * sl + 1);
	if (!sp)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
		}

	
