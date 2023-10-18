/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:55:28 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/16 10:50:13 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n bytes from memory area src to memory area dst.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dst);
}
