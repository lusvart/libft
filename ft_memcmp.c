/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:51:06 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:47:25 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//returns zero if the two strings are identical.
//returns the difference between the first two differing bytes.
//(treated as unsigned char values, so that `\200' is greater than `\0', f.e.)
//Zero-length strings are always identical.  

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hella";

    int result = ft_memcmp(str1, str2, sizeof(str1));

    if (result == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (result < 0) {
        printf("La cadena 1 es menor que la cadena 2.\n");
    } else {
        printf("La cadena 1 es mayor que la cadena 2.\n");
    }

    return 0;
}
*/