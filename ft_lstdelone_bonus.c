/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:52:47 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 17:00:38 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It frees the memory if a node ('lst') and its content using the provided 
// 'del' function, without freeing the memory of the next pointer.

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
	{
		return ;
	}
	del((lst)->content);
	free(lst);
	lst = NULL;
}
