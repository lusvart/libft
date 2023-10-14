/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:48:31 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:52:11 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_total;
	char	*join;

	if (s1 == NULL || s2 == NULL )
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1] != '\0' )
		len_s1 ++;
	len_s2 = 0;
	while (s2[len_s2] != '\0' )
		len_s2 ++;
	len_total = len_s1 + len_s2;
	join = (char *)malloc((len_total + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, len_s1 + 1);
	ft_strlcpy(join + len_s1, s2, len_s2 + 1);
	return (join);
}

/*
int main(void)
{
    // Ejemplo de uso de ft_strjoin
    char const *s1 = "Hello, ";
    char const *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result != NULL)
    {
        printf("Cadena concatenada: %s\n", result);

        // ¡No olvides liberar la memoria después de su uso!
        free(result);
    }
    else
    {
        printf("Error al concatenar cadenas.\n");
    }
    return 0;
}
*/
