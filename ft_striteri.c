/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:22:22 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/10 13:04:53 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i ++;
	}
}

/*#include <stdio.h>
void printichar(unsigned int i, char *character) 
{
    printf("Índice: %u, Carácter: %c\n", i, *character);
}
int	main()
{
	char str[] = "hello";
	printf("Original: %s\n", str);
	ft_striteri(str, printichar);
	return (0);
}*/