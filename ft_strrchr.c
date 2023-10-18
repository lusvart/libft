/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:49:08 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/16 11:42:16 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
