/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:58:22 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/10 16:53:22 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			s_len;
	size_t			len_needed;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	len_needed = (s_len + 1) * sizeof(char);
	str = (char *)malloc(len_needed);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}*/

/*// Función de ejemplo que convierte caracteres a mayúsculas
char convertir_a_may(unsigned int indice, char caracter) {
    // Ignorar el índice, simplemente convertir el carácter a mayúsculas
    return (char)toupper(caracter);
}

int main() {
    // Caso 1: Cadena vacía
    char *cadena_vacia = ft_strmapi("", convertir_a_may);
    printf("Caso 1: Cadena vacía: %s\n", cadena_vacia);
    free(cadena_vacia);

    // Caso 2: Cadena con caracteres
    char *cadena_original = "hello world";
    char *cadena_modificada = ft_strmapi(cadena_original, convertir_a_may);
    printf("Caso 2: Cadena original: %s\n", cadena_original);
    printf("       Cadena modificada: %s\n", cadena_modificada);
    free(cadena_modificada);

    // Caso 3: Cadena nula
    char *cadena_nula = ft_strmapi(NULL, convertir_a_may);
    printf("Caso 3: Cadena nula: %p\n", (void *)cadena_nula);

    return 0;
}*/