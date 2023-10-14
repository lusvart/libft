/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:04:05 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/13 16:18:21 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main() 
{
	int	i;
	char buffer[10];
	printf("Antes: ");
	i = 0;
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	ft_bzero(buffer, sizeof(buffer));
	printf("\nDespués: ");
	i = 0;
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	return (0);
}
*/