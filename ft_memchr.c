/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:34:47 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/16 13:03:51 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates the first occurrence of c (converted to an unsigned char) in string s
//returns a pointer to the byte located, or NULL if no such byte exists 
//within n bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0 && *p != (unsigned char)c)
	{
		++p;
		--n;
	}
	if (n > 0 && *p == (unsigned char)c)
		return ((void *)p);
	else
		return (NULL);
}
