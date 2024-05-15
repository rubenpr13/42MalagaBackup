/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:23:18 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/05/15 14:23:18 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nuevaLista;
	t_list	*objeto;
	
	if (!lst || !f || !del)
		return (NULL);
	nuevaLista = NULL;
	while (lst)
	{
		objeto = ft_lstnew(f(lst->content));
		if (!objeto)
		{
			ft_lstclear(&nuevaLista, del);
			return (NULL);
		}
		ft_lstadd_back(&nuevaLista, objeto);
		lst = lst->next;
	}
	return (nuevaLista);
}