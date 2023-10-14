/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:49:08 by luciafe2          #+#    #+#             */
/*   Updated: 2023/09/23 12:49:11 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			str = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		str = s;
	}
	if (str != NULL)
	{
		return ((char *)str);
	}
	return (NULL);
}

/*int main()
{
    char x [] = "Hello World";
    char *result = ft_strrchr(x,'e');
    char *resultft = strrchr(x,'e');
    printf("El resultado con mi función es:%s\n",result);
    printf("El resultado con la función es:%s\n",resultft);
    return (0);
}*/
