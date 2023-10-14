/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:54:31 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 16:32:09 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

/*
#include <stdio.h>
int	main ()
{
	char	str;
	int		len;

	str = "hola mundo";
	len = ft_strlen(str);
	printf("The length of my string is: %d\n", len);
	return (0);
}*/