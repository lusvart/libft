/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:18:56 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 16:36:07 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It creates a duplicate of an string by allocating memory for a new string
// and coping the content of the original string into it.

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*new_str;

	length = ft_strlen(s1);
	new_str = (char *)malloc(length + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, length + 1);
	return (new_str);
}
