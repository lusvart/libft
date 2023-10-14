/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:15 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:46:43 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*allocate_memory(int n, size_t len)
{
	char	*result;

	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
	}
	return (result);
}

void	convert_digits(char *result, int n, size_t len)
{
	size_t	i;

	if (n < 0)
	{
		i = 1;
		while (len-- > i)
		{
			result[len] = '0' + n % 10 * (-1);
			n = n / 10;
		}
	}
	else
	{
		i = 0;
		while (len-- > i)
		{
			result[len] = '0' + n % 10;
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;

	len = get_len(n);
	result = allocate_memory(n, len);
	if (!result)
		return (NULL);
	convert_digits(result, n, len);
	return (result);
}

/*#include <stdio.h>

int main()
{
    int casos[] = {0, 123, -456, 7890, 2147483647, -2147483648};
    size_t num_casos = sizeof(casos) / sizeof(casos[0]);
    for (size_t i = 0; i < num_casos; i++)
    {
        int n = casos[i];
        char *str = ft_itoa(n);

        if (str)
        {
            printf("Número: %d, Cadena: %s\n", n, str);
            free(str); // No olvides liberar la memoria asignada
        }
        else
        {
            printf("Error al convertir %d a cadena\n", n);
        }
    }
    return (0);
}*/