/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:15 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 16:44:44 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It converts an integrer number in a char string, 
// representing it's digits including the sing if it's negative.

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
