/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:35 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 17:04:12 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It iterates the list 'lst' appling the function 'f' to the content 
// of each node and creates a new list as a result.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	temp = NULL;
	while (lst != NULL)
	{
		content = f(lst -> content);
		temp = ft_lstnew((content));
		if (temp == NULL)
		{
			del (content);
			ft_lstclear (&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst -> next;
	}
	return (head);
}
