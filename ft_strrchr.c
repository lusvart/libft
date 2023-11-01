/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:49:08 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 16:19:03 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It locates the last 'c' occurrence. 
// If the character is found, it returns a pointer to that position.
// Otherwise, it returns null.

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			str = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		str = s;
	}
	if (str != NULL)
	{
		return ((char *)str);
	}
	return (NULL);
}
