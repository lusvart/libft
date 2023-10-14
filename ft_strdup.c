/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:18:56 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/02 12:18:58 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int main()
{
    const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);

    free(copia);

    return 0;
}*/
/*int main(void)
{
    const char *original = "¡Hola, mundo!";
    
    // Probemos ft_strlen
    size_t len = ft_strlen(original);
    printf("La longitud de la cadena es: %zu\n", len);

    // Probemos ft_strlcpy
    char buffer[20];
    size_t copied_len = ft_strlcpy(buffer, original, sizeof(buffer));
    printf("Después de copiar, la cadena es: %s\n", buffer);
    printf("Número de caracteres copiados: %zu\n", copied_len);

    // Probemos ft_strdup
    char *duplicate = ft_strdup(original);
    printf("Copia duplicada: %s\n", duplicate);

    // ¡No olvidemos liberar la memoria asignada por ft_strdup!
    free(duplicate);

    return 0;
}*/