/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:39:28 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:50:32 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' || (char)c == '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

/*int main() {
    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    char *d1 = strchr(src, '\0');
    char *d2 = ft_strchr(src, '\0');
    if (d1 == d2)
    {
        printf("La función ft_strchr funciona correctamente con '\\0'.\n");
    }
    else
    {
        printf("La función ft_strchr no funciona correctamente con '\\0'.\n");
    }
    return 0;
}*/