/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:13:20 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:57:46 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

/*
#include <stdio.h>
int main(void)
{
    const char *original = "Esta_es_una_cadena_de_prueba";
    unsigned int start = 5;
    size_t len = 10;
    char *result = ft_substr(original, start, len);
    if (result != NULL)
    {
        printf("Cadena original: %s\n", original);
        printf("Subcadena desde la posición %u con longitud %zu: %s\n", 
			start, len, result);

        // Liberar la memoria asignada
        free(result);
    }
    else
    {
        printf("Error al obtener la subcadena.\n");
    }
    return 0;
}*/