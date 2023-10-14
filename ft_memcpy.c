/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:55:28 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/14 18:12:43 by luciafe2         ###   ########.fr       */
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

/*int	main()
{
	char source[] = "Hello, world!";
    char destination[20];
    ft_memcpy(destination, source, sizeof(source));
    printf("Cadena copiada: %s\n", destination);
    memcpy(destination, source, sizeof(source));
    printf("Cadena copiada: %s\n", destination);
    return (0);
}*/