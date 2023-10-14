/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:52:28 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/13 16:04:51 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int	main()
{
	int	i;
	char buffer[20];
	ft_memset(buffer, '3', sizeof(buffer));
	while(i < sizeof(buffer))
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/