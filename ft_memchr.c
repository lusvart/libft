/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:34:47 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:47:05 by luciafe2         ###   ########.fr       */
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

/*
int main() {
    const char *str = "Hello, World!";
    char search_char = 'W';

    const char *result = (const char *)ft_memchr(str, search_char, strlen(str));

    if (result != NULL)
	{
    printf("Se encontró '%c' en la posición %ld.\n", search_char, result - str);
    } 
	else {
    printf("'%c' no encontrado en la cadena.\n", search_char);
    }
    return 0;
}*/