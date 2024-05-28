/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:00:12 by fzutter           #+#    #+#             */
/*   Updated: 2023/12/01 09:35:07 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nelem;
	t_list	*nlst;

	if (lst == NULL && f == NULL && del == NULL)
		return (NULL);
	nlst = NULL;
	while (lst != NULL)
	{
		nelem = ft_lstnew(f(lst->content));
		if (nelem == NULL)
		{
			ft_lstclear(nelem->content, del);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nelem);
		lst = lst->next;
	}
	return (nlst);
}
