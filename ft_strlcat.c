/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:32:33 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:52:45 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	while ((i + 1 + j) < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
int main() {
    char dst[24] = "Me da igual ";
    char src[] = "tu función";

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Concatenated String: %s\n", dst);
    printf("Total Length: %zu\n", result);

    return 0;
}*/