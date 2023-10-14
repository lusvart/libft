/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:32:58 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:53:21 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main() {
    char source[] = "Hello, world!";
    char destination[10];

size_t copied_length = ft_strlcpy(destination, source, sizeof(destination));

    printf("Cadena copiada: %s\n", destination);
    printf("Longitud de la cadena copiada: %zu\n", copied_length);
    return 0;
}*/
