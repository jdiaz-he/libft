/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:09:39 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/08 20:09:36 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;
	void	*faux;

	new = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		faux = f(lst->content);
		if (!faux)
		{
			free(faux);
			return (0);
		}
		next = ft_lstnew(faux);
		if (!next)
		{
			free(next);
			return (0);
		}
		ft_lstadd_back(&new, next);
		lst = lst->next;
	}
	return (new);
}
