/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:42:57 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/14 17:46:41 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
	{
		return (0);
	}
}

/*
#include <stdio.h>
#include <unistd.h>
int	main ()
{
	char c;
	
	c = 'A';
	if (ft_isalnum(c))
		printf("%c es un dígito o una letra.", c);
	else
		printf("%c no es un dígito ni una letra.", c);
	return (0);
}
*/
