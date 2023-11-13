/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:16:07 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/13 17:08:25 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*start;

	if (lst)
	{
		temp = lst;
		if (!(start = ft_lstnew(f(temp->content))))
			return (NULL);
		temp = temp->next;
		while (temp)
		{
			if (!(new = ft_lstnew(f(temp->content))))
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new);
			temp = temp->next;
		}
		return (start);
	}
	return (NULL);
}
