/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:28:14 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:25:59 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		current = ft_lstnew((*f)(lst->content));
		if (current == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}

/*Cette fonction applique la fonction f à chaque élément 
de la liste donnée pour créer une nouvelle liste (avec malloc (3)) 
résultant des applications successives de f. 
Si l'allocation échoue, la fonction renvoie NULL.*/